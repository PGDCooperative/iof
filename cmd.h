#ifndef CMD_H
#define CMD_H

#include <stdbool.h>
#include <stdint.h>

#define MAX_COMMANDS 1000000
#define MAX_COMMANDS_SIZE 100

#define CMD_CONTINUE "c"

typedef struct GCmdBuffer {
    bool hasCmdOnTick[MAX_COMMANDS];
    char cmds[MAX_COMMANDS][MAX_COMMANDS_SIZE];
} GCmdBuffer;

#endif