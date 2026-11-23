#include "UnityRendering.h"

#import <Metal/Metal.h>
#import <QuartzCore/QuartzCore.h>

#include "UnityAppController.h"
#include "CVTextureCache.h"

#include "ObjCRuntime.h"
#include <libkern/OSAtomic.h>
#include <utility>

extern "C" void InitRenderingMTL()
{
}

static MTLPixelFormat GetColorFormatForSurface(const UnityDisplaySurfaceMTL* surface)
{
    MTLPixelFormat colorFormat = MTLPixelFormatInvalid;

#if PLATFORM_IOS || PLATFORM_VISIONOS
    if (surface->hdr)
    {
        // 0 = 10 bit, 1 = 16bit
        if (@available(iOS 16.0, *))
            colorFormat = UnityHDRSurfaceDepth() == 0 ? MTLPixelFormatRGB10A2Unorm : MTLPixelFormatRGBA16Float;
    }
#endif

    if(colorFormat == MTLPixelFormatInvalid && surface->wideColor)
    {
        // at some point we tried using MTLPixelFormatBGR10_XR formats, but it seems that apple CoreImage have issues with that
        //   and we are not alone here, see for example https://forums.developer.apple.com/forums/thread/66166
        // when application goes to background the colors are changed (more white-ish?)
        // no matter what we tried, the issue persists
        // NOTE: the most funny thing is when we set color space to be P3 we get same whitish colors always
        // NOTE: but this time they become normal when going to background
        // in all, it seems that using rgba f16 is the most robust option here, so we are back to it again
        colorFormat = MTLPixelFormatRGBA16Float;
    }

    if(colorFormat == MTLPixelFormatInvalid)
        colorFormat = surface->srgb ? MTLPixelFormatBGRA8Unorm_sRGB : MTLPixelFormatBGRA8Unorm;

    return colorFormat;
}

extern "C" void CreateSystemRenderingSurfaceMTL(UnityDisplaySurfaceMTL* surface)
{
    MTLPixelFormat colorFormat = GetColorFormatForSurface(surface);
    surface->swapchain.layer.presentsWithTransaction = NO;
    surface->swapchain.layer.drawsAsynchronously = YES;

    if (UnityPreserveFramebufferAlpha())
    {
        const CGFloat components[] = {1.0f, 1.0f, 1.0f, 0.0f};
        CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
        CGColorRef color = CGColorCreate(colorSpace, components);
        surface->swapchain.layer.opaque = NO;
        surface->swapchain.layer.backgroundColor = color;
        CGColorRelease(color);
        CGColorSpaceRelease(colorSpace);
    }

    CGColorSpaceRef colorSpaceRef = nil;
    if (surface->hdr)
    {
        if (@available(iOS 16.0, *))
            colorSpaceRef = UnityHDRSurfaceDepth() == 0 ? CGColorSpaceCreateWithName(CFSTR("kCGColorSpaceITUR_2100_PQ")) : CGColorSpaceCreateWithName(CFSTR("kCGColorSpaceExtendedLinearITUR_2020"));
    }
    if(colorSpaceRef == nil)
    {
        if (surface->wideColor)
            colorSpaceRef = CGColorSpaceCreateWithName(surface->srgb ? kCGColorSpaceExtendedLinearSRGB : kCGColorSpaceExtendedSRGB);
        else
            colorSpaceRef = CGColorSpaceCreateWithName(kCGColorSpaceSRGB);
    }

    surface->swapchain.layer.colorspace = colorSpaceRef;
    CGColorSpaceRelease(colorSpaceRef);

    surface->swapchain.layer.device = surface->device;
    surface->swapchain.layer.pixelFormat = colorFormat;
    surface->swapchain.layer.framebufferOnly = (surface->framebufferOnly != 0);
    surface->colorFormat = (unsigned)colorFormat;
}

extern "C" int UnityCommandQueueMaxCommandBufferCountMTL()
{
    // customizable argument to pass towards [MTLDevice newCommandQueueWithMaxCommandBufferCount:],
    // the default value is 64 but with Parallel Render Encoder workloads, it might need to be increased

    // This value limits the number of async GPU readbacks we can perform in parallel before hitting a
    // hard sync on the render thread.
    // See https://developer.apple.com/documentation/metal/mtlcommandqueue/3553957-commandbufferwithdescriptor?language=objc
    return 512;
}
