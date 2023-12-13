//Program for Linear Search or Sequential Search
//Time complexity = O(n)
#include<stdio.h>
int i, size, ele, flag=0;
int linearSearch(int arr[], int ele, int size)
{
    for(i=0; i<size; i++)
    {
        if(ele == arr[i])
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }

    if(flag == 1)
    {
        printf("Element found at %d position",i+1);
    }
    else
    {
        printf("Element not found!");
    }
}

void main()
{
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter elements in the array:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter element: ");
    scanf("%d",&ele);

    linearSearch(arr, ele, size);
}