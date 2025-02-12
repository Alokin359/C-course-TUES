#include <stdio.h>

#define ARRAY_SIZE 5

#define PRINT_ARRAY(arr) for(int i = 0; i < ARRAY_SIZE; i++) { \
    printf("%d, \n", arr[i]);}

int main(){
  int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5};
  PRINT_ARRAY(arr);
}