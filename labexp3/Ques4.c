//WAP to check Armstrong number.
#include<stdio.h>
void main()
{
    int a,b,n,sum=0;
    printf("Enter number\n");
    scanf("%d",&n);
    b=n;
    while(n!=0)
    {
        a=n%10;
        sum+=a*a*a;
        n/=10;
    }
    if(b==sum || b<=9)
    printf("%d is an amstrong number",b);
    else
    printf("%d is not an amstrong number",b);

}