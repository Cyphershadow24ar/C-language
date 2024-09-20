//WAP to find the largest number among three numbers.
#include<stdio.h>
void largest_number();
int main()
{
  int a, b, c, largest;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  largest_number(a,b,c,largest);
  return 0;
}
void largest_number(int a,int b,int c,int largest)
{
    if (a >= b) {
    if (a >= c) {
      largest = a;
    } else {
      largest = c;
    }
  } else {
    if (b >= c) {
      largest = b;
    } else {
      largest = c;
    }
  }
  printf("The largest number is %d.\n", largest);
}
