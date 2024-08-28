#include <stdio.h>
//WAP to find the largest number among three numbers.
int main() {
  int a, b, c, largest;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  // Nested if and else statements.
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

  // Print the largest number
  printf("The largest number is %d.\n", largest);

  return 0;
}

