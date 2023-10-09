//Program for delete the given elements into an array.
#include <stdio.h>
void main()
{
    int n, arr[50], pos, i=0, j=0, ele;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array\n: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element : ");
    scanf("%d", &ele);
    for(i=0; i<n; i++)
    {
        if(ele==arr[i])
        {
            pos=i;
            for(j=pos; j<n; j++)
            {
                arr[j]=arr[j+1];
            }
        }
    }
    for(i=0; i<n-1; i++)
    {
        printf("%d\t",arr[i]);
    }
}