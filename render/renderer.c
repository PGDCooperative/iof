#include "renderer.h"
#include "raylib.h"
#include <stdlib.h>

GRenderer* CreateGRenderer(GSettings p_settings)
{
    GRenderer* renderer = calloc(1, sizeof(GRenderer));
    if (renderer == NULL)
    {
        return NULL;
    }

    renderer->settings = p_settings;

    InitWindow(renderer->settings.width, renderer->settings.height, "IoF");
    SetTargetFPS(60);
    SetExitKey(0);

    return renderer;
}

void RenderLoop(GRenderer* renderer)
{
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        BeginMode2D(renderer->camera);
        EndMode2D();
        EndDrawing();
    }
}