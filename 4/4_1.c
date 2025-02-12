#include<stdio.h>

#define SIGMA(A,B) (A+B)*(A+B)

int main(){
    int a=5,b=-2;
    printf("%d", SIGMA(a,b));
    return 0;
}