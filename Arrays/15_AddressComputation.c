//Program for computation of address of given element in the three dimensional array and verification with the Physical Address.
#include<stdio.h>
void main()
{
    int arr[20][20][30];

    int i=5,j=7,k=13;
    printf("%u\n",&arr[i][j][k]);  //using address operator

    int *x = arr[0][0] + ((i-0)*(19-0+1)*(29-0+1)+(j-0)*(29-0+1)+(k-0));
    printf("%u",x);    //using  array index formula
}