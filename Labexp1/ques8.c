#include <stdio.h>
//Write a program to pre increment and post increment operator.
int main() 
{
    int a = 9;
    int b;
    printf("Initial value of a: %d\n", a);
    b = ++a; 
    printf("After pre-increment, a: %d, b: %d\n", a, b);
    b = a++;
    printf("After post-increment, a: %d, b: %d\n", a, b);
    return 0;
}
