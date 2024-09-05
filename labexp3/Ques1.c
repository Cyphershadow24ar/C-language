//WAP to reverse a number.
#include<stdio.h>
void main ()
{
    int a,b,r=0,i=1;
    printf("Enter a No.");
    scanf("%d", &a);
    while(i<=a)
    {
        b =a%10;
        r=r*10+b;
        a=a/10; 
    }
    printf("reverse no.%d",r);
}