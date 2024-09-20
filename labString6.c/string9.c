//WAP to find the length of a string using library function.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Find the length of the string using strlen
    int length = strlen(str);

    // Display the result
    printf("Length of the string: %d\n", length);

    return 0;
}
