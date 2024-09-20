//WAP to swap two numbers with and without 3rd variable using pointer.
#include <stdio.h>

int main()
{
    int x,a,b,*p=&a,*q=&b;
    printf("enter 1st no: ");
    scanf("%d",&a);
    printf("enter 2st no: ");
    scanf("%d",&b);
    printf("1.Swapping with variable\n");
    printf("2.Swapping without variable.\n");
    printf("enter choice: ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        {
            int temp=*p;
            *p=*q;
            *q=temp;
            printf("after swapping:\n");
            printf("1st no= %d\n2nd no= %d",*p,*q);
            break;
        }
    case 2:
        {
            *p=*p+*q;
            *q=*p-*q;
            *p=*p-*q;
            printf("after swapping:\n");
            printf("1st no= %d\n2nd no= %d",*p,*q);
        }
        break;
    default:
        printf("invalid input");
        break;
    }
}