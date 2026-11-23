#if PLATFORM_IOS || PLATFORM_VISIONOS

#import "UnityView.h"
#import <UnityRuntime/UnityInternalInterface.h>
#import "UnityAppController+Rendering.h"
#include "OrientationSupport.h"
#import <GameController/GameController.h>

@interface UnityView ()
@property (nonatomic, readwrite) ScreenOrientation contentOrientation;
@end

// indirect mouse input on iOS: GCMouse.scroll gives real wheel deltas per notch (a pan recognizer
// only gives an uneven pan), and UIHoverGestureRecognizer gives the cursor position uGUI routes on.
@implementation UnityView (iOSScrollWheel)

- (void)setupIndirectMouseInput
{
    // wheel deltas: attach to the current mouse and any that becomes current
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(mouseDidBecomeCurrent:)
                                                 name:GCMouseDidBecomeCurrentNotification
                                               object:nil];
    if (GCMouse.current != nil)
        [self attachScrollHandlerToMouse:GCMouse.current];

    // cursor position for routing
    UIHoverGestureRecognizer* hover = [[UIHoverGestureRecognizer alloc] initWithTarget:self action:@selector(handleHover:)];
    [self addGestureRecognizer:hover];
}

// both registrations outlive the view (observer is unretained, handler lives on the shared GCMouse),
// so clear them or a stale view could call a torn down player in UaaL
- (void)teardownIndirectMouseInput
{
    [[NSNotificationCenter defaultCenter] removeObserver:self
                                                    name:GCMouseDidBecomeCurrentNotification
                                                  object:nil];
    // the mouse is shared: after a UaaL reload a newer view may own the slot, so only clear ours
    for (GCMouse* mouse in GCMouse.mice)
    {
        if (mouse.mouseInput.scroll.valueChangedHandler == self.indirectScrollHandler)
            mouse.mouseInput.scroll.valueChangedHandler = nil;
    }
    self.indirectScrollHandler = nil;
}

- (void)mouseDidBecomeCurrent:(NSNotification*)note
{
    GCMouse* mouse = note.object;
    if (mouse != nil)
        [self attachScrollHandlerToMouse:mouse];
}

- (void)attachScrollHandlerToMouse:(GCMouse*)mouse
{
    // one block per view, reused across mice so teardown can match ours by pointer. dispatch to the
    // main thread since GCMouse may fire on any queue. kScrollScale is a placeholder until measured.
    if (self.indirectScrollHandler == nil)
    {
        __weak UnityView* weakSelf = self;
        self.indirectScrollHandler = ^(GCControllerDirectionPad* dpad, float xValue, float yValue) {
            const float kScrollScale = 1.0f;
            const float dx = xValue * kScrollScale;
            const float dy = yValue * kScrollScale;
            dispatch_async(dispatch_get_main_queue(), ^{
                // only forward while the pointer is over this view, else a scroll over a sibling
                // view would still drive Unity in UaaL
                UnityView* strongSelf = weakSelf;
                if (strongSelf == nil || !strongSelf.indirectPointerInside)
                    return;
                UnitySendScrollWheel(dx, dy);
            });
        };
    }
    mouse.mouseInput.scroll.valueChangedHandler = self.indirectScrollHandler;
}

- (void)handleHover:(UIHoverGestureRecognizer*)recognizer
{
    // began/changed = inside, ended/cancelled/failed = left; the scroll handler gates on this
    self.indirectPointerInside = recognizer.state == UIGestureRecognizerStateBegan ||
                                 recognizer.state == UIGestureRecognizerStateChanged;
    if (!self.indirectPointerInside)
        return;

    // pass the raw UIKit point; UnitySendMousePosition applies the touch path's transform so it
    // matches ScreenManager extents
    CGPoint location = [recognizer locationInView:self];
    UnitySendMousePosition((float)location.x, (float)location.y);
}

@end

@implementation UnityView (iOS)
- (void)willRotateToOrientation:(UIInterfaceOrientation)toOrientation fromOrientation:(UIInterfaceOrientation)fromOrientation;
{
    // to support the case of interface and unity content orientation being different
    // we will cheat a bit:
    // we will calculate transform between interface orientations and apply it to unity view orientation
    // you can still tweak unity view as you see fit in AppController, but this is what you want in 99% of cases

    ScreenOrientation to    = ConvertToUnityScreenOrientation(toOrientation);
    ScreenOrientation from  = ConvertToUnityScreenOrientation(fromOrientation);

    if (fromOrientation == UIInterfaceOrientationUnknown)
        _curOrientation = to;
    else
        _curOrientation = OrientationAfterTransform(_curOrientation, TransformBetweenOrientations(from, to));

    _viewIsRotating = YES;
}

- (void)didRotate
{
    // if we are using metal display link we will delay actual unity-side resizing to happen before rendering
    if (_shouldRecreateView && !GetAppController().unityUsesMetalDisplayLink)
    {
        // recreateRenderingSurface expects layer's drawableSize to be set to proper value
        //   and updateLayerDrawableSizeFromBounds does exactly that
        // note that normally we go through recreateRenderingSurfaceIfNeeded
        //   which does call updateLayerDrawableSizeFromBounds
        [self updateLayerDrawableSizeFromBounds];
        [self updateUnityBackbufferSize];
        [self recreateRenderingSurface];
    }

    _viewIsRotating = NO;
}

- (void)touchesBegan:(NSSet<UITouch*>*)touches withEvent:(UIEvent*)event      { UnitySendTouches(UITouchPhaseBegan, touches, event); }
- (void)touchesEnded:(NSSet<UITouch*>*)touches withEvent:(UIEvent*)event      { UnitySendTouches(UITouchPhaseEnded, touches, event); }
- (void)touchesCancelled:(NSSet<UITouch*>*)touches withEvent:(UIEvent*)event  { UnitySendTouches(UITouchPhaseCancelled, touches, event); }
- (void)touchesMoved:(NSSet<UITouch*>*)touches withEvent:(UIEvent*)event      { UnitySendTouches(UITouchPhaseMoved, touches, event); }

@end

#endif // PLATFORM_IOS || PLATFORM_VISIONOS
