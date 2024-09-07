//WAP to stop for loop if j is equal to 6.
#include <stdio.h>
int main()
{
  int i;
  i = 1;
  while (i <= 10)
 {
   if (i == 6)
    {
     printf ("The I value is Reached 6.\n");
     break;
    }
  printf("%d\n",i);
  ++ i;
 }
}