//WAP to compare two strings using string library functions.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from input
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Compare the strings using strcmp() function
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result < 0) {
        printf("First string is smaller than the second string.\n");
    } else {
        printf("First string is greater than the second string.\n");
    }

    return 0;
}
