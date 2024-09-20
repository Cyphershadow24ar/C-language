//WAP to Concatenate two strings using string library function.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character if present
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenate the strings using strcat
    strcat(str1, str2);

    // Display the result
    printf("Concatenated string: %s\n", str1);

    return 0;
}
