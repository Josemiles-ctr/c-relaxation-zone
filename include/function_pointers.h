#include <stddef.h>
#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
#define ARRAY_SIZE(arr) (sizeof(arr)/ sizeof(arr[0]))
#define CALLBACK(name) int (*name)(int)
#define ITERATE(arr, op){\
 process_array(arr, ARRAY_SIZE(arr),op);\
}
void process_array(int arr[], size_t length, CALLBACK(op));
int is_even(int x);

#endif // !FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

