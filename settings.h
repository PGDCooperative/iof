#ifndef SETTINGS_H
#define SETTINGS_H

#include <stdbool.h>

typedef struct GSettings {
    int width, height;
    bool fullscreen;
} GSettings;

#endif