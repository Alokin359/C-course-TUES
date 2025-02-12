#include <stdio.h>

#define DEBUG(x) printf("Variable %s is %d on line %d\n", #x, x, __LINE__);

int main() {
  int a = 5;
  DEBUG(a);
}