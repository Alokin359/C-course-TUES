#include <stdio.h>

#define SQUARE_SUM(A, B) ((A) + (B)) * ((A) + (B))

int main() {
    int a = 3;
    int b = 4;
    int result = SQUARE_SUM(a, b);
    printf("The result of (%d + %d) ^ 2 is: %d\n", a, b, result);
    return 0;
}