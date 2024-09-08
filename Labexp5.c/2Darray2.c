//WAP in c with 2D array of size NxM and calculate sum of all its elements.
#include <stdio.h>

int main() {
    int N, M;

    printf("Enter the number of rows (N): ");
    scanf("%d", &N);
    
    printf("Enter the number of columns (M): ");
    scanf("%d", &M);

    int Array[N][M];

    printf("Enter the elements of the (%dx%d) array:\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &Array[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += Array[i][j];
        }
    }
    printf("Sum of all elements in the 2D array: %d\n", sum);
    return 0;
}