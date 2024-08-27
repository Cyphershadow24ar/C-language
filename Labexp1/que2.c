#include <stdio.h>
//Write a program to perform all relational operator.
int main() {
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("%d < %d is %s\n", a,b, (a<b) ? "true" : "false");
    printf("%d > %d is %s\n", a,b, (a>b) ? "true" : "false");
    printf("%d <= %d is %s\n", a,b, (a<=b) ? "true" : "false");
    printf("%d >= %d is %s\n", a,b, (a>=b) ? "true" : "false");
    printf("%d == %d is %s\n", a,b, (a==b) ? "true" : "false");
    printf("%d != %d is %s\n", a,b, (a!=b) ? "true" : "false");
    return 0;
}
