#include <stdio.h>
//Write a program to pre decrement and post decrement operator.
int main() 
{
    int a = 11;
    int b;
    printf("Initial value of a: %d\n", a);
    b = --a;
    printf("After pre-decrement, a: %d, b: %d\n", a, b);
    b = a--;
    printf("After post-decrement, a: %d, b: %d\n", a, b);
    return 0;
}