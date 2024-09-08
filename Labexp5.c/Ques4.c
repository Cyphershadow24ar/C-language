//WAP that take a 2-dimensional array of size N X M as input and returns a new array containing the transpose of original matrix.
#include <stdio.h>

int main() {
    int N, M;

    // Input the dimensions of the matrix
    printf("Enter the number of rows (N): ");
    scanf("%d", &N);
    printf("Enter the number of columns (M): ");
    scanf("%d", &M);

    // Input the original matrix
    int originalMatrix[N][M];
    int transposedMatrix[M][N];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &originalMatrix[i][j]);
        }
    }

    // Transpose the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            transposedMatrix[j][i] = originalMatrix[i][j];
        }
    }

    // Display the original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", originalMatrix[i][j]);
        }
        printf("\n");
    }

    // Display the transposed matrix
    printf("Transposed Matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", transposedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
