#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareChars(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    char str[] = "Hello World";
    int length = strlen(str);

    qsort(str, length, sizeof(char), compareChars);

    printf("Sorted string: %s\n", str);

    return 0;
}
