#include <stdio.h>

int search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int haystack[] = {10, 20, 30, 40, 50};
    int size = sizeof(haystack) / sizeof(haystack[0]);
    int target = 30;

    int index = search(haystack, size, target);

    if (index != -1) {
        printf("Found target %d at index %d in the haystack.\n", target, index);
    } else {
        printf("Target %d not found in the haystack.\n", target);
    }

    return 0;
}
