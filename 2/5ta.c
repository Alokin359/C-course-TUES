#include <stdio.h>

#define TYPE int

#define SWAP(A, B, TYPE)                                                       \
  TYPE temp = A;                                                               \
  A = B;                                                                       \
  B = temp;                                                                    \
  printf("A = %d, B = %d\n", A, B);
  
int main() {
  TYPE a = 5, b = 10;
  SWAP(a, b, TYPE);
}