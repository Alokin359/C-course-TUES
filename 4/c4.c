#include <stdio.h>
#include <math.h>

void raise_to_fourth_power(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (long)pow(arr[i], 4);
    }
}

int main() {
    long arr[] = {2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%ld ", arr[i]);
    }
    printf("\n");

    raise_to_fourth_power(arr, size);

    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%ld ", arr[i]);
    }
    printf("\n");

    return 0;
}
