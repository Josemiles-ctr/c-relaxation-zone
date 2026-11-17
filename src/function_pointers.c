#include <stdio.h>
#define ARRAY_SIZE(arr) (sizeof(arr)/ sizeof(arr[0]))
#define CALLBACK(name) int (*name)(int)

int is_even(int x){
  return x%2==0?1:0;
}
CALLBACK(call_back)=is_even;
int main(){
    int arr[]={1,3,0,5,6,7};
  printf("%zu\n", (ARRAY_SIZE(arr)));
  printf("The function pointer of function is_even is %p\n",(void *)(call_back)) ;
}
