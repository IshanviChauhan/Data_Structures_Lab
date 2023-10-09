//Program for Set Symmetric Difference.
#include <stdio.h>
void main()
{
    int i=0, j=0, k=0, n, m;

    printf("Enter size of array A: ");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter elements of array A: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter size of array B: ");
    scanf("%d",&m);
    int b[m];
    
    printf("Enter elements of array B: \n");
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    int c[n+m];
    int d[n+m];
    int sym[n+m];
    i=0;
    j=0;

    //Set Difference A-B
    while(i<n && j<m)
    {
        if(a[i] != b[j] && a[i]<b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else if(a[i] == b[j])
        {
            i++;
            j++;
        }
        else if(a[i] > b[j])
        {
            j++;
        }
    }

    //Set Difference B-A
    while(i<n && j<m)
    {
        if(b[i] != a[j] && b[i]<a[j])
        {
            d[k] = b[i];
            k++;
            i++;
        }
        else if(b[i] == a[j])
        {
            i++;
            j++;
        }
        else if(b[i] > a[j])
        {
            j++;
        }
    }
    
    i=0;
    j=0;

    while(i<n && j<m)
    {
        if(c[i]<d[j])
        {
            sym[k]=c[i];
            i++;
        }
        else
        {
            sym[k]=d[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        sym[k] = c[i];
        i++;
        k++;
    }

    while (j < m) {
        sym[k] = d[j];
        j++;
        k++;
    }

    printf("Symmetric Difference: \n");
    for(i=0; i<k; i++)
    {
        printf("%d ",sym[i]);
    }

}