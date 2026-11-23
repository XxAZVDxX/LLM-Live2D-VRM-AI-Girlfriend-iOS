#include <UnityRuntime/UnityInternalGraphicsInterface.h>

extern "C" MTLTextureRef AcquireSwapchainDrawable(UnityViewSwapchain* swapchain)
{
    // check if have acquired the backbuffer texture already
    if (swapchain->drawableTexture)
        return swapchain->drawableTexture;

    // this is coming from CADisplayLink: query next drawable
    if (!swapchain->drawable)
        swapchain->drawable = [swapchain->layer nextDrawable];

    id<MTLTexture> drawableTex = [swapchain->drawable texture];
    if (drawableTex)
    {
        UnityUnregisterMetalTextureForMemoryProfiler(swapchain->drawableTexture);
        swapchain->drawableTexture = drawableTex;
        UnityRegisterExternalRenderSurfaceTextureForMemoryProfiler(drawableTex);
    }

    return drawableTex;
}
