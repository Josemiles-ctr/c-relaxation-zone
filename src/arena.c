#include "../include/arena.h"
#include <stddef.h>
void arena_init(Arena *arena)
{
    arena->offset = 0;
}
void *arena_allocate(Arena *arena, size_t size)
{
  if (size > ARENA_SIZE - arena->offset) {
        return NULL;
    }

    void *ptr = &arena->memory[arena->offset];

    arena->offset += size;

    return ptr;
}

void arena_reset(Arena *arena)
{
    arena->offset = 0;
}


