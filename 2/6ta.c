#include <stdio.h>

#define SORT(ARRAY, SIZE, TYPE, COMPARE)                                       \
  for (int i = 0; i < SIZE - 1; i++) {                                         \
    for (int j = 0; j < SIZE - i - 1; j++) {                                   \
      if (COMPARE(ARRAY[j], ARRAY[j + 1])) {                                   \
        TYPE temp = ARRAY[j];                                                  \
        ARRAY[j] = ARRAY[j + 1];                                               \
        ARRAY[j + 1] = temp;                                                   \
      }                                                                        \
    }                                                                          \
  }

int print_array(int *arr, int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  return 0;
}

int compareInt(int a, int b) { 
    return a > b; 
    }

int main() {
  int arrInt[] = {5, 2, 8, 1, 9};
  print_array(arrInt, 5);
  SORT(arrInt, 5, int, compareInt);
  printf("\n");
  print_array(arrInt, 5);
}