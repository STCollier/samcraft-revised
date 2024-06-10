#ifndef RESOURCES_H
#define RESOURCES_H

#include "../util/common.h"
#include "../util/thpool.h"
#include "../util/timer.h"

#include "../gfx/sprite.h"
#include "../gfx/text.h"
#include "../gfx/skybox.h"

#include "shader.h"

struct Resources {
    threadpool thpool;
    struct Skybox skybox;

    struct {
        shader_t main;
        shader_t blockOverlay;
        shader_t sky;
        shader_t sprite;
        shader_t text;
    } shaders;

    struct {
        struct Sprite crosshair;
        struct Sprite textPanel;
    } sprites;

    struct {
        struct Text FPS;
        struct Text playerPosition;
    } text;

    struct {
        struct Timer FPSTimer;
    } timers;
};

void resources_load();
void resources_update();
void resources_render();
void resources_destroy();

#endif