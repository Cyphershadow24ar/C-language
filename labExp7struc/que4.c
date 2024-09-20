//WAP to Add Two Distances (in an inch-feet system) using Structures.
#include <stdio.h>

struct Distance {
  int feet;
  int inches;
};

int main() {
  struct Distance d1, d2, sum;

  printf("Enter first distance(Feet): ");
  scanf("%d", &d1.feet);
  
  printf("Enter first distance (inches): ");
  scanf("%d", &d1.inches);

  printf("\nEnter second distance (feet): ");
  scanf("%d", &d2.feet);

  printf("Enter second distance (inches): ");
  scanf("%d", &d2.inches);

  sum.feet = d1.feet + d2.feet;
  sum.inches = d1.inches + d2.inches;

  if(sum.inches >=12){
    sum.feet += sum.inches/ 12;
    sum.inches %= 12;
  }
  
  printf("\nSum of distance: %d feet %d inches\n", sum.feet, sum.inches);
  
  return 0;
}