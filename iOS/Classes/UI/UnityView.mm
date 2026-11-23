#include "UnityView.h"
#include "UnityAppController.h"
#include "UnityAppController+Rendering.h"
#include "OrientationSupport.h"
#include "Unity/DisplayManager.h"
#include "Unity/ObjCRuntime.h"

#import <Metal/Metal.h>

#if PLATFORM_IOS || PLATFORM_VISIONOS
@interface UnityView (iOSScrollWheel)
- (void)setupIndirectMouseInput;
- (void)teardownIndirectMouseInput;
@end
#endif

@implementation UnityView
{
    CGSize _surfaceSize;
}

@synthesize contentOrientation  = _curOrientation;

// we need to support both CADisplayLink and CAMetalDisplayLink
// alas they have a bit of an "opposite" approach to backbuffer (drawable) management so we have several complications
// - for CADisplayLink the callback is more or less just "oh it is time: you asked to be poked every N ms"
//     we will query drawable from the view's layer (we delay this as much as possible to not introduce sync point)
//   so we should NOT tweak drawable size at "random" times
//   our approach was:
//     whenever iOS is telling us that view should be resized, we poke unity native side
//     * this is a bit more complicated: we were doing so only in layoutSubviews and some corner cases with orientation change
//     and on the next displaylink callback we recreate the "connection" between native side and trampoline (using "new" drawable extents)
//
// - for CAMetalDisplayLink the callback gives us a ready CAMetalDrawable
//     that is all the syncing is handled by iOS (this is very good) and it now acts like a compositor of sorts
//   there are several caveats though (read above: we have a "unity approach" already in place)
//   first of all: we can never "skip" rendering (before it was fine, simply because if we don't query drawable, the contents are preserved by iOS)
//   second: we should update drawable size whenever iOS is telling us that the view bounds are tweaked
//     recall that we get ready-made drawable in the callback - at this point we can not tweak anything regarding drawable
//     and yet we should delay updating unity on "backbuffer" change, since it might have drawable of the old size currently
//
// So our plan is:
// - override "change bounds" methods to track drawable size (with _surfaceSize)
//     note that we will update drawableSize immediately when using CAMetalDisplayLink, but not when using CADisplayLink
// - on displaylink callback as before we will update connection to unity render surfaces
//     when using CADisplayLink we will also update drawableSize here before poking unity
//

// this will do update drawable size to agree with bounds
// CAMetalDisplayLink: will be called from onUpdateDrawableSize, called in all "something view related changed" callbacks
// CADisplayLink: we will call it from the display link callback, to not touch drawableSize while we are potentially rendering to drawable
//   using old extents
- (void)updateLayerDrawableSizeFromBounds
{
    if (![self.layer isKindOfClass: [CAMetalLayer class]])
    {
        // UnityView either has CAMetalLayer backing, when running on Metal, or CALayer, when running in 'nographics' mode
        return;
    }

    CAMetalLayer* metalLayer = (CAMetalLayer*)self.layer;
    @synchronized(metalLayer)
    {
        const CGSize size  = self.bounds.size;
        const float  scale = self.contentScaleFactor;
        const CGSize systemRenderSize = CGSizeMake(::roundf(size.width * scale), ::roundf(size.height * scale));

        if (systemRenderSize.width <= 0 || systemRenderSize.height <= 0)
        {
            _shouldRecreateView = NO;
        }
        else if (systemRenderSize.width == metalLayer.drawableSize.width && systemRenderSize.height == metalLayer.drawableSize.height)
        {
            _shouldRecreateView = NO;
        }
        else
        {
            metalLayer.drawableSize = systemRenderSize;
            _shouldRecreateView = YES;
        }
    }
}

- (void)onUpdateDrawableSize
{
    // when using metal display link, update drawable size immediately so that we are getting callback with correct size
    // when using old display link we will do this on frame start along with updating proxy textures (so that they all agree)
    if(GetAppController().unityUsesMetalDisplayLink)
        [self updateLayerDrawableSizeFromBounds];
}

// this reports "backbuffer" update to unity: this should be done right before player loop
- (void)updateUnityBackbufferSize
{
    const CGSize size  = self.bounds.size;

    // this is needed for CADisplayLink handling since in this case we do not track view extents changes
    if (size.width != _surfaceSize.width || size.height != _surfaceSize.height)
        _shouldRecreateView = YES;
    _surfaceSize = size;

    const float  scale = self.contentScaleFactor;
    const CGSize systemRenderSize = CGSizeMake(::roundf(size.width * scale), ::roundf(size.height * scale));

    _curOrientation = (ScreenOrientation)UnityReportResizeView((unsigned)systemRenderSize.width, (unsigned)systemRenderSize.height, _curOrientation);
    ReportSafeAreaChangeForView(self);
}

// this was part of public interface, so keep it around just in case
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-implementations"
- (void)boundsUpdated
{
    [self updateUnityBackbufferSize];
}
#pragma clang diagnostic pop

- (void)initImpl:(CGRect)frame scaleFactor:(CGFloat)scale
{
#if !PLATFORM_TVOS
    self.multipleTouchEnabled   = YES;
    self.exclusiveTouch         = YES;
#endif
    self.contentScaleFactor     = scale;
    self.skipRendering = NO;

#if PLATFORM_TVOS
    _curOrientation = UNITY_TVOS_ORIENTATION;
#elif PLATFORM_VISIONOS
    _curOrientation = UNITY_VISIONOS_ORIENTATION;
#endif

    [self updateUnityBackbufferSize];

#if PLATFORM_IOS || PLATFORM_VISIONOS
    [self setupIndirectMouseInput];
#endif
}

- (id)initWithFrame:(CGRect)frame scaleFactor:(CGFloat)scale;
{
    if ((self = [super initWithFrame: frame]))
        [self initImpl: frame scaleFactor: scale];
    return self;
}
- (id)initWithFrame:(CGRect)frame
{
    if ((self = [super initWithFrame: frame]))
        [self initImpl: frame scaleFactor: 1.0f];
    return self;
}

- (id)initFromMainScreen
{
#if !PLATFORM_VISIONOS
    CGRect  frame   = [UIScreen mainScreen].bounds;
    CGFloat scale   = UnityScreenScaleFactor([UIScreen mainScreen]);
#else
    CGRect  frame   = CGRectMake(0.0f, 0.0f, 1920.0f, 1080.0f);
    CGFloat scale   = 1.0f;
#endif
    if ((self = [super initWithFrame: frame]))
        [self initImpl: frame scaleFactor: scale];
    return self;
}

- (void)dealloc
{
#if PLATFORM_IOS || PLATFORM_VISIONOS
    [self teardownIndirectMouseInput];
#endif
}

- (void)resumeRendering
{
    self.skipRendering = NO;
}

- (void)recreateRenderingSurfaceIfNeeded
{
    // when using metal display link, update drawable size immediately so that we are getting callback with correct size
    // when using old display link we will do this on frame start along with updating proxy textures (so that they all agree)
    if(!GetAppController().unityUsesMetalDisplayLink)
        [self updateLayerDrawableSizeFromBounds];

    [self updateUnityBackbufferSize];

    const int requestedSRGB = UnityGetSRGBRequested();
    const int requestedWideColor = UnityGetWideColorRequested();
    const int requestedHDR = UnityGetHDRModeRequested();

    UnityDisplaySurfaceBase* surf = GetMainDisplaySurface();

    if (_shouldRecreateView == YES
        ||  surf->srgb != requestedSRGB
        ||  surf->wideColor != requestedWideColor
        ||  surf->hdr != requestedHDR
    )
    {
        [self recreateRenderingSurface];
    }
}

- (void)recreateRenderingSurface
{
    auto controller = GetAppController();
    if (controller.engineLoadState >= kUnityEngineLoadStateRenderingInitialized)
    {
        unsigned requestedW, requestedH;
        UnityGetRenderingResolution(&requestedW, &requestedH);

        RenderingSurfaceParams params =
        {
            .msaaSampleCount        = UnityGetDesiredMSAASampleCount(1),
            .srgb                   = UnityGetSRGBRequested(),
            .wideColor              = UnityGetWideColorRequested(),
            .hdr                    = UnityGetHDRModeRequested(),
            .metalFramebufferOnly   = UnityMetalFramebufferOnly(),
            .metalMemorylessDepth   = UnityMetalMemorylessDepth(),
            .disableDepthAndStencil = UnityDisableDepthAndStencilBuffers(),
        };

        APP_CONTROLLER_RENDER_PLUGIN_METHOD_ARG(onBeforeMainDisplaySurfaceRecreate, &params);
        [GetMainDisplay() recreateSurface: params];
        APP_CONTROLLER_RENDER_PLUGIN_METHOD(onAfterMainDisplaySurfaceRecreate);

        // TODO: it should be done better
        if (   controller.engineLoadState >= kUnityEngineLoadStateAppReady && !GetAppController().unityUsesMetalDisplayLink
            && (_viewIsRotating || UnityIsPaused()))
        {
            UnityDisplayLinkCallback(GetAppController().unityDisplayLink.timestamp);
            UnityRepaint();
        }
    }

    _shouldRecreateView = NO;
}

- (void)safeAreaInsetsDidChange
{
    ReportSafeAreaChangeForView(self);
}

- (void)layoutSubviews
{
    [super layoutSubviews];
    [self onUpdateDrawableSize];

    for (UIView* subView in self.subviews)
    {
        if ([subView respondsToSelector: @selector(onUnityUpdateViewLayout)])
            [subView performSelector: @selector(onUnityUpdateViewLayout)];
    }
}

- (void)setContentScaleFactor:(CGFloat)contentScaleFactor
{
    [super setContentScaleFactor:contentScaleFactor];
    [self onUpdateDrawableSize];
}

- (void)setFrame:(CGRect)frame
{
    [super setFrame:frame];
    [self onUpdateDrawableSize];
}

- (void)setBounds:(CGRect)bounds
{
    [super setBounds:bounds];
    [self onUpdateDrawableSize];
}


@end

@implementation UnityView (Deprecated)
- (void)recreateGLESSurfaceIfNeeded { [self recreateRenderingSurfaceIfNeeded]; }
- (void)recreateGLESSurface         { [self recreateRenderingSurface]; }
@end

static Class UnityRenderingView_LayerClassMTL(id self_, SEL _cmd)
{
    return NSClassFromString(@"CAMetalLayer");
}

static Class UnityRenderingView_LayerClassNULL(id self_, SEL _cmd)
{
    return NSClassFromString(@"CALayer");
}

@implementation UnityRenderingView
+ (Class)layerClass
{
    return nil;
}

+ (void)InitializeForAPI:(UnityRenderingAPI)api
{
    IMP layerClassImpl = api == apiMetal ? (IMP)UnityRenderingView_LayerClassMTL : (IMP)UnityRenderingView_LayerClassNULL;
    class_replaceMethod(object_getClass([UnityRenderingView class]), @selector(layerClass), layerClassImpl, UIView_LayerClass_Enc);
}

@end

void ReportSafeAreaChangeForView(UIView* view)
{
    CGRect safeArea = ComputeSafeArea(view);
    UnityReportSafeAreaChange(safeArea.origin.x, safeArea.origin.y,
        safeArea.size.width, safeArea.size.height);

#if !PLATFORM_VISIONOS
    if (UnityDeviceHasCutout())
    {
        CGSize cutoutSizeRatio = UnityGetCutoutToScreenRatio();

        if (!CGSizeEqualToSize(CGSizeZero, cutoutSizeRatio))
        {
            const float w = ([UIScreen mainScreen].nativeBounds.size.width * cutoutSizeRatio.width);
            const float h = ([UIScreen mainScreen].nativeBounds.size.height * cutoutSizeRatio.height);

            // Apple's cutouts are currently centred on the horizontal, and stuck to the top of the vertical, hence this positioning.
            const float x = (([UIScreen mainScreen].nativeBounds.size.width - w) / 2);
            const float y = ([UIScreen mainScreen].nativeBounds.size.height - h);
            UnityReportDisplayCutouts(&x, &y, &w, &h, 1);
            return;
        }
    }
#endif

    UnityReportDisplayCutouts(nullptr, nullptr, nullptr, nullptr, 0);
}

CGRect ComputeSafeArea(UIView* view)
{
    CGSize screenSize = view.bounds.size;
    CGRect screenRect = CGRectMake(0, 0, screenSize.width, screenSize.height);

    UIEdgeInsets insets = [view safeAreaInsets];
    float insetLeft = insets.left, insetBottom = insets.bottom, insetTop = insets.top;
    float insetHeight = insetBottom + insetTop;
    float insetWidth = insetLeft + insets.right;

    // Unity uses bottom left as the origin
    screenRect = CGRectOffset(screenRect, insetLeft, insetBottom);
    screenRect.size.width -= insetWidth;
    screenRect.size.height -= insetHeight;

    const float scale = view.contentScaleFactor;

    // Truncate safe area size because in some cases (for example when Display zoom is turned on)
    // it might become larger than Screen.width/height which are returned as ints.
    screenRect.origin.x = (unsigned)::roundf(screenRect.origin.x * scale);
    screenRect.origin.y = (unsigned)::roundf(screenRect.origin.y * scale);
    screenRect.size.width = (unsigned)::roundf(screenRect.size.width * scale);
    screenRect.size.height = (unsigned)::roundf(screenRect.size.height * scale);

    return screenRect;
}
