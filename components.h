#ifndef COMPONENTS_H
#define COMPONENTS_H

#include "math.h"
#include <stdint.h>

typedef struct GTransform {
    GVector2 position;
    uint16_t rotation;
    GVector2 scale;
} GTransform;

typedef GVector2 GVelocity;

#endif