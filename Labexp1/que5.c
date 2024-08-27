#include<stdio.h>
//Write a program to perform all Bitwise operator.
int main()
{
    int a=30;
    int b=15;
    int c=2;
    c= a&b;
    printf("LINE 1-Value of c is %d\n", c);
    c= a|b;
    printf("LINE 2-Value of c is %d\n", c);
    c= a^b;
    printf("LINE 3-Value of c is %d\n", c);
    c= ~a;
    printf("LINE 4-Value of c is %d\n", c);
    c= a<<2;
    printf("LINE 5-Value of c is %d\n", c);
    c= a>>2;
    printf("LINE 6-value of c is %d\n", c);
    return 0;
}