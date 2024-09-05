//WAP to find factorial of a given number.
#include<stdio.h>
void main()
{
    int f,i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    f=1;
    i=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("The factorial %d is %d",n,f);
}