#include "world.h"
#include <bits/time.h>
#include <time.h>
#include <unistd.h>

void* Loop(void* world_ptr)
{
    GWorld* world = (GWorld*)world_ptr;

    struct timespec start;
    struct timespec end;
    clock_gettime(CLOCK_MONOTONIC, &end);
    while (!world->shouldHalt)
    {
        clock_gettime(CLOCK_MONOTONIC, &start);
        struct timespec dt = (struct timespec){.tv_nsec = start.tv_nsec - end.tv_nsec,
        .tv_sec = start.tv_sec - end.tv_sec};
        end = start;

        usleep(100000);
    }
    return NULL;
}