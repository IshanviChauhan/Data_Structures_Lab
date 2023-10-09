//Program for merging two sorted arrays.
//Time complexity = Theta(n) + Theta(n) + Theta(n) + Theta(n) + Theta(k) = Theta(n+k) = Theta(n)
//Space complexity = Theta(1) + Theta(1) + Theta(1) + Theta(1) + Theta(1) + Theta(n+m) = Theta(n+m)
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
    i=0;
    j=0;

    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged Array: \n");
    for(i=0; i<k; i++)
    {
        printf("%d ",c[i]);
    }

}