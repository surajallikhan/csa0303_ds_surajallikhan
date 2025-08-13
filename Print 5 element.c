#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    if (sizeof(arr) / sizeof(arr[0]) >= 5) {
        int fifthElement = arr[4]; 
        printf("The 5th element is: %d\n", fifthElement);
    } else {
        printf("The array does not have at least 5 elements.\n");
    }

    return 0;
}

