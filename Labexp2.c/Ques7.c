#include<stdio.h>
//WAP to check Whether a Number is Positive or Negative or Zero.
int main()
{
    int a;
    printf("Enter a number:-");
    scanf("%d", &a);
    if (a==0){
        printf("zero");
    }
    else if (a>0){
        printf("postive number");
    }
    else {
        printf("negative number");
    }
    return 0;
}