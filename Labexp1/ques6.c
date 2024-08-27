#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the marks you got\n");
    scanf("%d",&a);
    printf("Enter the total marks\n");
    scanf("%d",&b);
    c=0.33*b;
    if (a>=c)
    {
        printf("YOU PASS THE EXAM");
    }
    else
    {
        printf("YOU FAIL THE EXAM");
    }
    return 0;
}