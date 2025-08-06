#include <stdio.h>
#include <limits.h>

int reverse(int x) {
    int sign = (x < 0) ? -1 : 1;
    long long reversed = 0; // Use long long to handle potential overflow
    
    x = x * sign; // Convert to positive for reversal
    
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    
    reversed *= sign;
    
    if (reversed > INT_MAX || reversed < INT_MIN) {
        return 0; // Overflow occurred
    }
    
    return (int)reversed;
}

int main() {
    int num = -12345;
    int reversed = reverse(num);
    printf("Original: %d\nReversed: %d\n", num, reversed);
    return 0;
}
