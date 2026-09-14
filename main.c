#include <stdio.h>
#include "./include/arena.h"
int main(void)
{
    Arena arena;

    arena_init(&arena);

    int *numbers = arena_allocate(&arena, 10 * sizeof(int));

    if (numbers == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        numbers[i] = i * 200;
    }

    printf("numbers[3] = %d\n", numbers[3]);
    printf("The current Arena offset is %zu\n", arena.offset);

    arena_reset(&arena);

    printf("After reset: %zu\n", arena.offset);

    return 0;
}
