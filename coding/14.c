#include <stdio.h>
int main() {
    int A[2][2]={{2,6},{7,3}};
    int B[2][2]={{3,2},{9,10}};
    printf("Matrix A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%i ", B[i][j]);
        }
        printf("\n");
    }
    printf("Hasil Penjumlahan Matrix A dan B:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%i ", A[i][j] - B[i][j]);
        }
        printf("\n");
    }
}