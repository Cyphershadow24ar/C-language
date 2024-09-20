//WAP to compute the sum of a maximum of ten numbers. User-entered negative numbers do not affect the final result.
#include <stdio.h>

int main() {
    int n;
    int s= 0;
    int c = 1;
    printf("Enter up to ten numbers.\n");
    while (1) {
        printf("Enter number %d: ", c);
        scanf("%d", &n);
        c++;
        if (c>10)
        break;
        else
        {
            if (n>=0)
            s+=n;
            else
            continue;
        }
        
        
    }
    printf("Sum of the entered non-negative numbers: %d\n", s);
    return 0;
}


