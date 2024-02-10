#ifndef WORLD_H
#define WORLD_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "cglm/cglm.h"
#include "cglm/call.h"
#include "uthash/uthash.h"

#include <stdbool.h>
#include <string.h>

#include "../engine/shader.h"
#include "../engine/camera.h"
#include "../engine/util.h"
#include "../engine/types.h"
#include "chunk.h"
#include "block.h"

struct World {
    struct Chunk *chunks;
};

int world_hashChunk(ivec2s position);
ivec2s world_unhashChunk(int hash);
struct Chunk *world_getChunk(int id);
void world_meshChunk(ivec2s position);

void world_init();
void world_render(shader_t shader);

extern struct World world;

#endif