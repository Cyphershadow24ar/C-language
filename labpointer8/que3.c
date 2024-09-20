//WAP to print size of different types of pointer variables.
#include <stdio.h>
int main()
{
    int *intPtr;
    char *charPtr;
    float *floatPtr;
    double *doublePtr;
    printf("Size of int pointer %d bytes\n",sizeof(intPtr));
    printf("Size of char pointer %d bytes\n",sizeof(charPtr));
    printf("Size of float pointer %d bytes\n",sizeof(floatPtr));
    printf("Size of double pointer %d bytes\n",sizeof(doublePtr));
    return 0;
}