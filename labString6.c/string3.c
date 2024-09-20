// /WAP to print individual characters of string in reverse order.
#include<stdio.h>
#include<string.h>

void printReverse(char str[]) {
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Print characters in reverse order
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Individual characters in reverse order: ");
    printReverse(inputString);

    return 0;
}
