//Program for Matrix Transpose
#include <stdio.h>
void main()
{
    int  i, j, n, m;
    printf("Enter the size of matrix A: ");
    scanf("%d%d", &n, &m);
    int a[n][m];
    int t[m][n];

    printf("Enter the elements of the first matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            t[i][j] = a[j][i];
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}