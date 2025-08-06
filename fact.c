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
        printf("Factorial numbers from 1 to %d:\n", num);
        for (int i = 1; i <= num; i++) {
            unsigned long long fact = factorial(i);
            printf("%d! = %llu\n", i, fact);
        }
    }

    return 0;
}
