//Program for Binary search
//Time complexity = O(log (base 2) n)
//Space complexity = Theta(1)
//            A         => 1 = 2^0
//          /   \ 
//         B     C      => 2 = 2^1
//        / \   / \ 
//       D   E F   G    => 4 = 2^2

// 2^0 + 2^1 + 2^2 + _ _ _ _ + 2^n = h = 2^n
// Taking log on both sides 
// => log(base 2)h = nlog(base 2)n => n = log(base 2)h

#include<stdio.h>
int i, size, ele, flag=0;
int binarySearch(int arr[], int ele, int size)
{
    int f=0, l=size-1, mid;
    while(f<=l)
    {
        mid = (f+l)/2;
        if(ele == arr[mid])
        {
            flag = 1;
            break;
        }
        else if(ele > arr[mid])
        {
            f = mid+1;
        }
        else
        {
            l = mid-1;
        }
    }

    if(flag == 1)
    {
        printf("Element found at %d position",mid+1);
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

   binarySearch(arr, ele, size);
}