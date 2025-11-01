// rotate an NXN matrix by 90 degrees clockwise in place by user input
#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the matrix (N x N): ");   
    scanf("%d", &N);
    int matrix[N][N];
    printf("Enter the elements of the matrix row-wise:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Rotate the matrix by 90 degrees clockwise
    for (int x = 0; x < N / 2; x++) {
        for (int y = x; y < N - x - 1; y++) {
            int temp = matrix[x][y];
            matrix[x][y] = matrix[N - y - 1][x];
            matrix[N - y - 1][x] = matrix[N - x - 1][N - y - 1];
            matrix[N - x - 1][N - y - 1] = matrix[y][N - x - 1];
            matrix[y][N - x - 1] = temp;
        }
    }
    printf("Rotated Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }   
                       
    return 0;
}