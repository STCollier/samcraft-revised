#ifndef RAYCAST_H
#define RAYCAST_H

#include "cglm/cglm.h"
#include "cglm/call.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../world/chunk.h"
#include "../world/block.h"
#include "../world/world.h"

struct Ray {
    bool blockFound; // If we hit a block
    int maxDistance; // Max distance that the DDA algorithm traverses before it stops
    struct Chunk *chunkToModify; // The chunk that we want to modify when breaking/placing
    ivec3 blockFoundPosition; // The relative block position within the chunk
    Direction placedDirection; // What direction the block is being placed
};

struct Ray ray_cast(vec3 startPosition, vec3 rayDirection, float maxDistance);

#endif