//WAP to program to calculate factorial of a number using recursion.

#include <stdio.h>
int fact();
int main()
{
    int n;
    printf("Enter no : ");
    scanf("%d", &n);
    printf("factorial of number is: %d", fact(n));
}
int fact(int n)
{
    if (n > 0)
    {
        return n * fact(n - 1);
    }
    else
        return 1;
}