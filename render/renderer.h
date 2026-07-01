#ifndef RENDERER_H
#define RENDERER_H

#include "control.h"
#include "raylib.h"
#include "settings.h"
#include "world.h"
#include <stdint.h>

typedef struct GRenderer {
    uint16_t nextControlID;
    GControl controls[MAX_CONTROLS];

    GSettings settings;

    Camera2D camera;

    GWorld* world;
} GRenderer;

GRenderer* CreateGRenderer(GSettings p_settings);

void RenderLoop(GRenderer* renderer);

#endif