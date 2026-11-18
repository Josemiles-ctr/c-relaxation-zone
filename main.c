#include <stdio.h>
#include "function_pointers.h"
int main(){
    int arr[]={1,3,0,5,6,7};
    ITERATE(arr, is_even);
    return 0;
} 
