//WAP to Find GCD of two Numbers.
#include<stdio.h>
void number();
int main()
{
    int a,b,i,n;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    number(a,b,i,n);
    return 0;
}

void number(int a, int b, int i, int n)
{
    for(i=1; i<=a && i<=b; i++)
    {
        if (a%i==0 && b%i==0)
        n=i;
    }
    printf("The GCD is %d", n);
}