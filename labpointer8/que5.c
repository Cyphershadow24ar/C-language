//WAP to add numbers using pointer.
#include <stdio.h>

int main()
{
    int a,b,sum,*p,*q;
    p=&a;
    q=&b;
    printf("enter 1st no: ");
    scanf("%d",&a);
    printf("enter 2st no: ");
    scanf("%d",&b);
    sum=*p+*q;
    printf("sum is %d",sum);

    return 0;
}