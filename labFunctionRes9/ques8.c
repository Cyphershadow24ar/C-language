//WAP to print the Fibonacci series up to given number using recursion.
#include <stdio.h>
void fibo();
int a=0,b=1,c;
int main()
{
    int n;
    printf("enter no of term: ");
    scanf("%d", &n);
    printf("%d\t%d\t",a,b);
    fibo(n-2);
}
void fibo(int n)
{
    if (n != 0)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
        fibo(n-1);
    }
    else
    return ;
}