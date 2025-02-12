#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
  int a = 5;
  int b = 6;
  printf("%d", MAX(a, b));
}