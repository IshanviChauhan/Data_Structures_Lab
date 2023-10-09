//Program for finding factorial of a given number using recursion.
#include <stdio.h>
int fact(int n, int f)
{
    if(n==1)
    {
        return f;
    }
    return fact(n-1,n*f);
}
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factorial = %d",fact(num,1));
}