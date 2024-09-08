//WAP in c to find the sum of diagonal elemnts in 2D array.
#include<stdio.h>
int main()
{
    int A[2][2],i,j,sum=0;
    printf("Enter all Elements of 2X2 Array: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    
    }
    printf("The Matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(i==j)
            {
                sum=sum+A[i][j];
            }
        }
    }
    printf("The sum of diagonal elements is : %d\n",sum);
}
