#include <stdio.h>

/*
    * Given a square of matrix M of size N*N. You task is to compute and return sum of principal diagonal elements of matrix. Your have to complete the function diagonalSum() which accepts N (size of matrix, N*N) and matrix M[ ][ ] as arguments.
*/
int sumDiagonal(int N, int M[ ][N]) {
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += M[i][i];
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);
    int M[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &M[i][j]);
    printf("%d", sumDiagonal(N, M));
    return 0;
}