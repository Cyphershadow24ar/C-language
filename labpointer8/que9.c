//WAP to find the largest elements of an array using pointers.
#include <stdio.h>
int main()
{
    int n, *ptr;
    printf("enter no. of element to be stored in the array: ");
    scanf("%d", &n);
    int arr[n];
    ptr = arr;
    for (int i = 0; i < n; i++)
    {
        printf("enter element arr[%d]= ", i);
        scanf("%d",ptr);
        ptr++;
    }
    ptr = arr;
    int max=*ptr;
    for (int i = 0; i < n; i++)
    {
        if(*ptr>max)
        {
            max=*ptr;
        }
        ptr++;
    }
    printf("largest element: %d",max);
}