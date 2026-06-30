#ifndef WORLD_H
#define WORLD_H

#include "entity.h"
#include <stdint.h>
#include <stdbool.h>

typedef struct GWorld {
    bool shouldHalt;
    
    uint16_t nextEntID;
    GEntity entities[MAX_ENTITIES];
} GWorld;

void* Loop(void* world_ptr);

#endif