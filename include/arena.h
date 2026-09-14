#ifndef ARENA_H
#define ARENA_H
#include <stddef.h>
#define ARENA_SIZE 1024
typedef struct
{
    unsigned char memory[ARENA_SIZE];
    size_t offset;
} Arena;
void arena_init(Arena *arena);
void *arena_allocate(Arena *arena, size_t size);
void arena_reset(Arena *arena);
#endif
