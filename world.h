#ifndef WORLD_H
#define WORLD_H

#include "cmd.h"
#include "components.h"
#include "entity.h"
#include <stdint.h>
#include <stdbool.h>

typedef struct GWorld {
    bool shouldHalt;
    
    uint64_t tick;

    GCmdBuffer cmdbuffer;

    uint16_t nextEntID;
    GEntity entities[MAX_ENTITIES];
    GTransform transforms[MAX_ENTITIES];
    GVelocity velocities[MAX_ENTITIES];
} GWorld;

GWorld* CreateGWorld();

void* WorldLoop(void* world_ptr);

#endif