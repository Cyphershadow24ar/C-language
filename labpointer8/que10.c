//WAP to demonstrate example of array of pointers.
#include <stdio.h>
int main()
{
    int n,*ptr;
    printf("enter no. of element in the array to be stored: ");
    scanf("%d",&n );
    int arr[n];
    ptr=&arr[0];
    for(int i=0;i<n;i++)
    {
        printf("enter element arr[%d]= ",i);
        scanf("%d",&*ptr);
        ptr++;
    }
    ptr=&arr[0];
    printf("element stored are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*ptr);
        ptr++;
    }
}