#ifndef CALCROOTS
#define CALCROOTS

typedef struct {
    double root1;
    double root2;
    int noRealSolutions;
} RootsResult;

RootsResult computeRoots(long double coefA, long double coefB, long double coefC);

#endif
