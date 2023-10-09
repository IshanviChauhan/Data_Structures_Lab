//Program for finding nth Fibonacci number using Recursion and improving its run time to save stack operations.
#include <stdio.h>
long long int DAT[101];
long long int fib(int n)
{
    if(n==1 || n==2)
    {
        return DAT[n] = n-1;
    }
    else
    {
        if(DAT[n] == 0)
        {
            DAT[n] = (fib(n-1)+fib(n-2));
        }
    }
    return DAT[n];
}
void main()
{
    long int i;
    for (i = 1; i <= 50; i++) 
    {
        printf("%lld\t", fib(i));
    }
}