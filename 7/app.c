#include <stdio.h>
#include "calcroots.h"

int main() {
    
    int coef1A = 1, coef1B = -3, coef1C = 2;
    RootsResult roots1;
    roots1 = computeRoots((long double)coef1A, (long double)coef1B, (long double)coef1C);
    if (roots1.noRealSolutions) {
        printf("No real roots\n");
    } else {
        printf("Roots: root1 = %lf, root2 = %lf\n", roots1.root1, roots1.root2);
    }

    float coef2A = 1.0, coef2B = -2.5, coef2C = 1.0;
    RootsResult roots2;
    roots2 = computeRoots((long double)coef2A, (long double)coef2B, (long double)coef2C); 
    if (roots2.noRealSolutions) {
        printf("No real roots\n");
    } else {
        printf("Roots: root1 = %lf, root2 = %lf\n", roots2.root1, roots2.root2);
    }

    double coef3A = 1.0, coef3B = -4.0, coef3C = 4.0;
    RootsResult roots3;
    roots3 = computeRoots((long double)coef3A, (long double)coef3B, (long double)coef3C);
    if (roots3.noRealSolutions) {
        printf("No real roots\n");
    } else {
        printf("Roots: root1 = %lf, root2 = %lf\n", roots3.root1, roots3.root2);
    }

    return 0;

}
