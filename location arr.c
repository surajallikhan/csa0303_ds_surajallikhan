#include <stdio.h>

int findElementIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if element is found
        }
    }
    
    return -1; // Return -1 if element is not found
}

int main() {
    int array[] = {5, 10, 15, 20, 25, 30};
    int target = 20;
    int size = sizeof(array) / sizeof(array[0]);

    int index = findElementIndex(array, size, target);

    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
