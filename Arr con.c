#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int size_concatenated = size1 + size2;

    int concatenated[size_concatenated];

    for (int i = 0; i < size1; i++) {
        concatenated[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        concatenated[size1 + i] = arr2[i];
    }

    printf("Concatenated array: ");
    for (int i = 0; i < size_concatenated; i++) {
        printf("%d ", concatenated[i]);
    }
    printf("\n");

    return 0;
}
