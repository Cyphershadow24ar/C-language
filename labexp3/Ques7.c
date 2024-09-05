//WAP to display all prime number between two number. (Using for Loop).
#include<stdio.h>
int main()
{
    int a,b,i,j,count;
    printf("Enter two number\n");
    scanf("%d%d", &a,&b);
    for(i=a+1; i<b; i++)
    {
        count=0;
         for(j=1; j<=i; j++)
         {
            if(i%j==0)
            count++;
         }
         if(count==2)
         printf("%d\t",i);
    }
     return 0;
}