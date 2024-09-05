//WAP to find GCD of two number. (Using for Loop).
#include<stdio.h>
int main()
{
    int a,b,i,n;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    for(i=1; i<=a && i<=b; i++)
    {
        if (a%i==0 && b%i==0)
        n=i;
    }
    printf("The GCD is %d", n);
  return 0;
}