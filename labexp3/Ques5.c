//WAP to print the Fibonacci series up to given number.
#include<stdio.h>
void main()
{
    int a,b,c,n,i;
    a=0;
    b=1;
    printf("Enter the term of Fibonacci series\n");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=3; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
}