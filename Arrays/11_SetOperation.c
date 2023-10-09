//Program for Set Difference.
#include <stdio.h>
void main()
{
    int i=0, j=0, k=0, n, m;

    printf("Enter size of set A: ");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter elements of set A: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter size of set B: ");
    scanf("%d",&m);
    int b[m];
    
    printf("Enter elements of set B: \n");
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    int c[n+m];
    int d[n+m];
    i=0;
    j=0;

    while(i<n || j<m)
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
        else if(a[i] != b[j] && a[i] > b[j])
        {
            j++;
        }
    }

    printf("Set Difference of A - B: \n");
    for(i=0; i<k; i++)
    {
        printf("%d ",c[i]);
    }

}