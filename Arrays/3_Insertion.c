//Program for insertion in the sorted array.
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
        if(ele>arr[i] && ele<arr[i+1])
        {
            pos=i+1;
            for(j=n; j>=pos; j--)
            {
                arr[j]=arr[j-1];
                if(j==pos)
                {
                    arr[pos]=ele;
                }
            }
            break;
        }
    }
    for(i=0; i<=n; i++)
    {
        printf("%d\t",arr[i]);
    }
}