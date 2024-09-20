//WAP to create, initialize, assign and access a pointer variable.
#include<stdio.h>
int main()
{
    int *ptr;
    int a=10;
    ptr=&a;
    printf("value of a=%d\n",a);
    printf("value of *ptr=%d\n",*ptr);
    *ptr=15;
    printf("new value of a=%d\n",a);
    printf("new value of *ptr=%d\n",*ptr);
    return 0;
}