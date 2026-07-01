#ifndef ENTITY_H
#define ENTITY_H

#include <stdbool.h>
#include <stdint.h>

#define MAX_ENTITIES 5000

typedef struct GEntity {
    bool used;
    uint64_t components;
} GEntity;

#endif