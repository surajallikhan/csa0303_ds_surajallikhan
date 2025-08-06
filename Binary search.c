#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid; // Return the index where the target is found
        }
        
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    int index = binarySearch(arr, 0, n - 1, target);
    
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}
