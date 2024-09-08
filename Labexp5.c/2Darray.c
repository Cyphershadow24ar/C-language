//WAP in c to delcare initialize and display in 2D array.
#include<stdio.h>
int main()
{
    int rows=3 ;
    int colum= 3 ;
    int Array[rows][colum];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colum; j++) {
            Array[i][j] = i * colum + j;
        }
    }
    // Display the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colum; j++) {
            printf("%d\t", Array[i][j]);
        }
        printf("\n");
    }
}