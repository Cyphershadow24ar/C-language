//WAP to check whether a number is palindrome or not.
#include<stdio.h>
void main()
{
    int a,s,b;
    printf("Enter any number\n");
    scanf("%d",&a);
    b=a;
    printf("The reverse of %d is : ",a);
    s=0;
    while(a!=0)
    {
        s=s*10+(a%10);
        a/=10;
    }
    printf("%d\n",s);
    if (b==s)
    printf("The number is Palindrome");
    else
    printf("The number is not Palindrone");
}
