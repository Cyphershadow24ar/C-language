#include<stdio.h>
//Write a program to check weather a student is pass or fail using conditional operator.
int main ()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    (marks>=40)?printf("pass\n"):printf("fail\n");
    //maxmimum marks is 100.
    return 0;
}