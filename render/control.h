#ifndef CONTROL_H
#define CONTROL_H

#include "raylib.h"
#include <stdint.h>

#define MAX_CONTROLS 500
#define MAX_CONNECTED_CONTROLS 50
#define MAX_TEXT_SIZE 500

typedef struct GControl {
    bool used;

    Vector2 position;
    float rotation;
    Vector2 scale;

    uint8_t tagid;

    Texture2D texture;
    char text[MAX_TEXT_SIZE];
    bool button;
    void (*buttoncallbackfn)(struct GControl* control);
} GControl;

#endif