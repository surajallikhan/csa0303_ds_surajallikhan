#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 1000 // Maximum size of the array

void findDuplicates(int arr[], int size) {
    bool hash[MAX_SIZE] = {false}; // Hash table to track visited elements

    printf("Duplicate elements: ");
    for (int i = 0; i < size; i++) {
        if (hash[arr[i]]) {
            printf("%d ", arr[i]);
        } else {
            hash[arr[i]] = true;
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 2, 3, 1, 2, 6, 4, 8, 9, 1, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, size);

    return 0;
}
