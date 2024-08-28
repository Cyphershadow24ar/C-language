#include<stdio.h>
//WAP to check Whether the Entered Year is Leap Year or not (Using nested else-if).
int main ()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    
    //Check if the year is divisible by 400.
    if (year %400 == 0){
        printf("%d is a leap year.\n",year);
        return 0;
    }

    // Check if the year is divisible by 100.
    else if (year %100 == 0){
        printf("%d is not a leap year.\n",year);
        return 0;
    }

    // Check if the year is divisible by 4.
    else if (year %4 == 0){
        printf("%d is a leap year.\n",year);
        return 0;
    }

    //Otherwise, the year is not a leap year.
    else{
        printf("%d is not a leap year.\n");
        return 0;
    }
}
