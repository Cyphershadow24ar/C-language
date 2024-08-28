#include<stdio.h>
//WAP to find the roots of a quadratic equation.
#include <math.h>
int main() {
  float a, b, c, d, r1, r2;

  printf("Enter the values of a b c respectively:\n");
  scanf("%f %f %f", &a, &b, &c);

  d = b * b - 4 * a * c;

  if (d > 0) {
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);

    printf("The real roots = %f %f",r1,r2);
  } else if (d == 0) {
    r1 = r2 = -b / (2 * a);
    printf("The roots are Equal= %f %f",r1,r2);
  } else {
    printf("The roots are imaginary");
  }
  return 0;
}
