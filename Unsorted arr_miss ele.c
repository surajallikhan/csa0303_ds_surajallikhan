#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {4, 2, 1, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    bool *present = (bool *)calloc(max - min + 1, sizeof(bool));

    for (int i = 0; i < n; i++) {
        present[arr[i] - min] = true;
    }

    printf("Missing element(s): ");
    for (int i = 0; i < max - min + 1; i++) {
        if (!present[i]) {
            printf("%d ", i + min);
        }
    }
    printf("\n");

    free(present); 

    return 0;
}
