#ifndef ENTITY_H
#define ENTITY_H

#include <stdint.h>

#define MAX_ENTITIES 5000

typedef struct GEntity {
    uint64_t components;
} GEntity;

#endif