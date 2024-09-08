//WAP to find the sum and average of n different integers in array.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the element of tha array:");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int a =0;
    for(int i=0; i<n; i++){
        a += arr[i];
    }
    float b = (float)a/n;
    
    printf("The Sum of the array is: %d\n", a);
    printf("The average of the array is: %f\n",b);
    return 0;
}
