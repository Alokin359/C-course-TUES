#include "calcroots.h"
#include <math.h>

RootsResult computeRoots(long double coefA, long double coefB, long double coefC) {
    
    RootsResult rootsData;
    
    if (coefA == 0) { 
        rootsData.noRealSolutions = 1;
        return rootsData;
    }
    
    long double discriminant = coefB * coefB - 4 * coefA * coefC;

    if (discriminant < 0) { 
        rootsData.noRealSolutions = 1;
    } else { 
        rootsData.noRealSolutions = 0;
        rootsData.root1 = (-coefB + sqrtl(discriminant)) / (2 * coefA);
        rootsData.root2 = (-coefB - sqrtl(discriminant)) / (2 * coefA);
    }

    return rootsData;
}
