//Program to insert the given elements into an array.
#include <stdio.h>
void main()
{
    int n, arr[50], pos, i=0, ele;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array\n: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter element : ");
    scanf("%d", &ele);
    for(i=n; i>=pos; i--)
    {
        arr[i]=arr[i-1];
        if(i==pos)
        {
            arr[i]=ele;
        }
    }
    for(i=0; i<=n; i++)
    {
        printf("%d\t",arr[i]);
    }
}