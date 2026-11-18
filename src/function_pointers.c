#include <stdio.h>
#include "function_pointers.h"
void process_array(int arr[], size_t length, CALLBACK(op)){
 for(int i=0; i<length; i++){
   if(op(arr[i])){
     printf("Element %d is Even\n", arr[i]);
   }else{
     printf("Element %d is Odd\n", arr[i]);
   }
 } 
}
int is_even(int x){
  return x%2==0?1:0;
}

