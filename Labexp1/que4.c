#include<stdio.h>
int main()
{
    int x=10;

     //Using assignment operator.
     int y=x;
     printf("y = %d\n", y);
     x +=6;
     printf("x = %d\n", x);
     x -=3;
     printf("x = %d\n", x);
     x *=2;
     printf("x *=%d\n", x);
     x /=5;
     printf("x /=%d\n", x);
     x %=4;
     printf("x %%=%d\n", x);
     return 0;
}
