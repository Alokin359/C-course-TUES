#include <stdio.h>
#include <stdlib.h>

#define DEBUG 

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void sortAndSumDivisibleByThree(int *arr, int size) {
    qsort(arr, size, sizeof(int), compare); 
    int sum = 0;

    #ifdef DEBUG
        printf("Sorted array: ");
        for (int i = 0; i < size; i++) printf("%d ", arr[i]);
        printf("\nElements at indices divisible by 3: ");
    #endif

    for (int i = 0; i < size; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
            #ifdef DEBUG
                printf("%d ", arr[i]);
            #endif
        }
    }

    #ifdef DEBUG
        printf("\n");
    #endif

    printf("Sum of elements at indices divisible by 3: %d\n", sum);
}

int main() {
    int arr[] = {5, 3, 8, 6, 1, 9, 2, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortAndSumDivisibleByThree(arr, size);
    return 0;
}
