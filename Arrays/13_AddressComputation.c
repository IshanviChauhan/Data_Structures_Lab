//Program for computation of address of given element in the one dimensional array and verification with the Physical Address.
#include<stdio.h>
void main()
{
    int arr[20];

    int i=5;
    printf("%u\n",&arr[i]); //using address operator

    int *x=arr+(i-0);
    printf("%u",x);    //usind array index formula
}