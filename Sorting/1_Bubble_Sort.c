//Program for Bubble Sort O(N2)
#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int arr[], int n) {  
  int i, j;  
  for (i = 0; i < n-1; i++) 
  {  
    for (j = 0; j<(n-i-1); j++) 
    {  
      if (arr[j] > arr[j+1]) 
      {  
        int temp = arr[j];  
        arr[j] = arr[j+1];  
        arr[j+1]=temp;  
      }  
    }  
  }  
}


int main(){
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}