#include "renderer.h"
#include "settings.h"
#include "world.h"
#include <stdlib.h>

int main(void)
{
    GSettings settings = {.width = 1280, .height = 720};
    /*GRenderer* renderer = CreateGRenderer(settings);
    if (renderer == NULL)
    {
        return 1;
    }
    //RenderLoop(renderer);*/

    GWorld* world = CreateGWorld();
    WorldLoop(world);

    return 0;
}