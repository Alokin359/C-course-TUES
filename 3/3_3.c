#include <stdio.h>

#ifdef _WIN32
    #define OS_WINDOWS
#elif defined(__linux__)
    #define OS_LINUX
#elif defined(__APPLE__)
    #define OS_MACOS
#endif


void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void reverseArray(int *arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void sortArray(int *arr, int size) {
    #ifdef OS_WINDOWS
        bubbleSort(arr, size);
    #elif defined(OS_LINUX)
        selectionSort(arr, size);
    #elif defined(OS_MACOS)
        insertionSort(arr, size);
    #else
        reverseArray(arr, size);
    #endif
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 3, 8, 6, 1, 9, 2, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, size);

    sortArray(arr, size);

    printf("Processed array:\n");
    printArray(arr, size);

    return 0;
}
