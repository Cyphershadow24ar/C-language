//WAP to calculate the sum of numbers from 1 to n using recursion.
#include <stdio.h>
int sum();
int main()
{
    int n;
    printf("Enter no : ");
    scanf("%d", &n);
    printf("sum of number is: %d", sum(n));
}
int sum(int n)
{
    if (n > 0)
    {
        return n + sum(n - 1);
    }
    else
        return 0;
}