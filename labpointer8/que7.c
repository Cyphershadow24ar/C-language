//WAP to find the maximum number between three numbers using a pointer.
#include<stdio.h>
int main()
{
    int a,b,c,*p=&a,*q=&b,*r=&c;
    printf("enter 1st no: ");
    scanf("%d",&a);
    printf("enter 2st no: ");
    scanf("%d",&b);
    printf("enter 3rd no: ");
    scanf("%d",&c);
    if (*p>*q)
    {
        if (*p>*r)
        printf("%d is greater than %d and %d",*p,*q,*r);
        else
        printf("%d is greater than %d and %d",*r,*p,*q);
    }
    else
    {
        if(*q>*r)
        printf("%d is greater than %d and %d",*q,*p,*r);
        else
        printf("%d is greater than %d and %d",*r,*p,*q);
    } 
}