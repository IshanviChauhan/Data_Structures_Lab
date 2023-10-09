//Program to find which element is repeated in the array and which is not.
#include<stdio.h>
void main()
{
    int n, arr[50], max,DAT[50]={0};
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array\n: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    } 
    
    max = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        DAT[arr[i]]++;
    }
    for(int i=0; i<max+1; i++)
    {
        if(DAT[i]!=0)
        {
            printf("%d occurred %d times.\n",i,DAT[i]);
        }
    }
}