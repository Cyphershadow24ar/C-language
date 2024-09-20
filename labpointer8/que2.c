//WAP to modify the value of a variable using pointer in C language.
#include<stdio.h>
int main()
{
    int *ptr;
    int a;
    printf("enter no: ");
    scanf("%d",&a);
    ptr=&a;
    printf("given value=%d\n",a);
    *ptr=a;
    printf("enter the modified value:");
    scanf("%d",ptr);
    printf("new modified value=%d\n",a);
    return 0;
}