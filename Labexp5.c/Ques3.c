//WAP in c to find the largest and smallest elements present in the array
#include<stdio.h>
int main ()
{
    int arr[10];
    printf("Enter 10 elemnts in the array:\n");
    for (int i=0; i<10; i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d",&arr[i]);   
    }

    int largest , smallest;
    largest=smallest=arr[0];

    for(int i=1;i<10;i++)
    {
      if (arr[i]> largest)
      {
        largest =arr[i];
      }
      if (arr[i]<smallest)
      {
        smallest =arr[i];
      }
    }

    printf("The largest element is %d\n",largest);
    printf("The smallest element is %d\n",smallest);
 return 0;
}
