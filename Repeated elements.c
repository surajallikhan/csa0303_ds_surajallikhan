#include <stdio.h>

#define MAX_SIZE 100

void findElementsRepeatedTwice(int arr[], int size) {
    int hashTable[MAX_SIZE] = {0}; // Initialize hash table with zeros
    
    printf("Elements repeated twice: ");
    
    for (int i = 0; i < size; i++) {
        if (hashTable[arr[i]] == 1) {
            printf("%d ", arr[i]);
        } else {
            hashTable[arr[i]]++;
        }
    }
    
    printf("\n");
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findElementsRepeatedTwice(arr, size);
    
    return 0;
}
