//Write a Programme to compute the sum of a maximum of ten numbers. The loop ends when the users’ types in a negative number.
#include <stdio.h>

int main() 
{
    int a;
    int s = 0;
    int b = 0;

    printf("Enter up to ten numbers.\n");

    while (b < 10) {
        printf("Enter number %d: ", b+ 1);
        scanf("%d", &a);

        if (a < 0)
        {
            break; // Exit the loop if the number is negative
        }

        s += a;
        b++;
    }

    printf("Sum of the total given numbers: %d\n", s);
    return 0;
}
