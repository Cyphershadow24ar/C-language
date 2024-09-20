//WAP to check Armstrong Number.

#include <stdio.h>
void armstrong(int n);
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
void armstrong(int n)
{
    int a,b=n,sum=0;
    while(n!=0)
    {
        a=n%10;
        sum+=a*a*a;
        n/=10;
    }
    if(b==sum || b<=9)
    printf("%d is an armstrong number",b);
    else
    printf("%d is not an armstrong number",b);

}