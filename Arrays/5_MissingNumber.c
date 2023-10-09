//Program for Missing number in an array.
#include <stdio.h>
void main()
{
    int n, arr[50], i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array\n: ");
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0; i<n-1; i++)
    {
        if(arr[i]+1!=arr[i+1])
        {
            printf("Missing Number = %d",arr[i]+1);
        }
    }
}