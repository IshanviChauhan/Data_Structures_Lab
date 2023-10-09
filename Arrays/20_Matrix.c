//Program for finding Matrix Determinant.
#include <stdio.h>
#include <math.h>

int determinant(int n, int a[n][n]) {
    if (n == 2) {
        return (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    } 
    else 
    {
        int det = 0;
        for (int k = 0; k < n; k++) 
        {
            int submatrix[n - 1][n - 1];
            for (int i = 1; i < n; i++) 
            {
                int submatrix_col = 0;
                for (int j = 0; j < n; j++) 
                {
                    if (j == k) 
                    {
                        continue;
                    }
                    submatrix[i - 1][submatrix_col++] = a[i][j];
                }
            }
            det += pow(-1, k) * a[0][k] * determinant(n - 1, submatrix);
        }
        return det;
    }
}

void main() {
    int i, j, n, m, det;
    printf("Enter the size of square matrix A: ");
    scanf("%d", &n);
    int a[n][n];

    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix A is:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    det = determinant(n, a);
    printf ("\nThe value of determinant of given matrix is %d.",det);
}