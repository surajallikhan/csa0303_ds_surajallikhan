#include <stdio.h>
#include <stdbool.h>

int main() {
    int registrationNumbers[] = {12345, 67890, 54321, 98765, 11111};
    int searchNumber;

   
    printf("Enter the registration number to search for: ");
    scanf("%d", &searchNumber);
    
    bool found = false;
  
    for (int i = 0; i < sizeof(registrationNumbers) / sizeof(registrationNumbers[0]); i++) {
        if (registrationNumbers[i] == searchNumber) {
            found = true;
            break;  // Exit the loop if a match is found
        }
    }

    if (found) {
        printf("Registration number %d was found in the array.\n", searchNumber);
    } else {
        printf("Registration number %d was not found in the array.\n", searchNumber);
    }

    return 0;
}
