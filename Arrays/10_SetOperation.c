//Program for Set Intersection.
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
        if(a[i] == b[j])
        {
            c[k] = a[i];
            k++;
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if(a[i] > b[j])
        {
            j++;
        }
    }

    printf("Intersection Array: \n");
    for(i=0; i<k; i++)
    {
        printf("%d ",c[i]);
    }

}