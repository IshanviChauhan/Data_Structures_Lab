//Program for computation of address of given element in the two dimensional array and verification with the Physical Address.
#include<stdio.h>
void main()
{
    int arr[20][20];

    int i=5,j=7;
    printf("%u\n",&arr[i][j]); //using address operator

    int *x=arr[0] +((i-0)*(19-0+1)+(j-0));
    printf("%u",x);    //usind array index formula
}