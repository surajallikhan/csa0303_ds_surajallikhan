#include <stdio.h>
#include <stdlib.h>

// Comparison function for ascending order
int compareAsc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Comparison function for descending order
int compareDesc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int arr[] = {8, 3, 1, 6, 4, 9, 2, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort in ascending order
    qsort(arr, size, sizeof(int), compareAsc);
    printf("Array in Ascending Order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort in descending order
    qsort(arr, size, sizeof(int), compareDesc);
    printf("Array in Descending Order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
