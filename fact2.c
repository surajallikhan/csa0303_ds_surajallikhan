#include <stdio.h>

unsigned long long factorial(int num) {
    unsigned long long result = 1;

    for (int i = 1; i <= num; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long result = factorial(num);
        printf("Factorial of %d is %llu\n", num, result);
    }

    return 0;
}
