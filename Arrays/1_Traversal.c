//Program for traversing array elements.
#include <stdio.h>
void main()
{
    int n, arr[50];
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array\n: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}