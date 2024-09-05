//WAP to check the given number is prime or not. (Using for Loop).
#include <stdio.h>
void main() 
{
  int n, i, flag = 0;
  printf("Enter any Number: ");
  scanf("%d", &n);

  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;
  for (i = 2; i <= n / 2; ++i) 
  {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);
}