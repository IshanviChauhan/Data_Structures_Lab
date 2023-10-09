//Program for Matrix transposition without second matrix.
#include <stdio.h>
void main() {
    int i, j, n, m;
    printf("Enter the size of matrix A (rows columns): ");
    scanf("%d%d", &n, &m);
    int a[n][m];

    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix A is:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    if (n != m) 
    {
        printf("Matrix is not square, so it cannot be transposed in-place.\n");
    } 
    else 
    {
        for (i = 0; i < n; i++) 
        {
            for (j = i + 1; j < n; j++) 
            {
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }

        printf("\nTranspose of Matrix A is:\n");
        for (i = 0; i < n; i++) 
        {
            for (j = 0; j < m; j++) 
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}

