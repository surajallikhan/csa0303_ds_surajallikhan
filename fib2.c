#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci series up to %d terms: ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }

        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("The number of terms should be greater than zero.\n");
    } else {
        fibonacci(num);
    }

    return 0;
}
