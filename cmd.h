#ifndef CMD_H
#define CMD_H

#include <stdint.h>
#define NULL_CONTINUE "1"

#define MAX_COMMANDS 1000000
#define MAX_COMMANDS_PER_TICK 50
#define MAX_COMMANDS_SIZE 50

typedef struct GCmdBuffer {
    uint8_t cmds_on_tick[MAX_COMMANDS];
    char cmds[MAX_COMMANDS][MAX_COMMANDS_PER_TICK][MAX_COMMANDS_SIZE];
} GCmdBuffer;

#endif