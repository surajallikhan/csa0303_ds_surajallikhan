#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to sum: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; 
    }

    long long int fib1 = 0, fib2 = 1, sum = 0;

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%lld ", fib1);
        sum += fib1;
        long long int nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("\nSum of the first %d Fibonacci numbers is: %lld\n", n, sum);

    return 0;
}
