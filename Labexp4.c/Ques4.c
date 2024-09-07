//WAP to print sum of odd numbers between 0 and 10.
#include <stdio.h>

int main() {
    int s = 0;

    for (int i = 1; i <= 10; i += 2) {
        s += i;
    }

    printf("Sum of odd numbers between 0 and 10: %d\n", s);

    return 0;
}
