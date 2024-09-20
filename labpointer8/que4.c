//WAP to change the value of constant integer using pointers.
#include<stdio.h>
int main()
{
    const int a=10;
    int *ptr;
    printf("constant value: %d\n",a);
    ptr=(int*)&a;
    *ptr=20;
    printf("updated constant value: %d",a);
}