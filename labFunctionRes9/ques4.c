//WAP to check Whether the Entered Year is Leap Year or not.
#include<stdio.h>
void leap_year();
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    leap_year(year);
    return 0;
}
void leap_year(int year)
{
    if(year %400 == 0){
        printf("%d is a leap year.\n",year);
    }
    else if (year %100 == 0){
      printf("%d is not a leap year.\n",year);
    }
    else if (year %4== 0){
        printf("%d is leap year.\n",year);
    }
    else{
        printf("%d is not a leap year.\n",year);
    }
}