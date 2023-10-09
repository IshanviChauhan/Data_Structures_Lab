//Program for Computing A raised to power n using Recursion.
#include <stdio.h>
int power(int a, int n, int ans)
{
    if(n==0)
    {
        return ans;
    }
    return power(a, n-1, ans*a);
}
void main()
{
    int a, n, ans;
    printf("Enter the value of base and exponent respectively: ");
    scanf("%d%d", &a,&n);
    printf("Answer = %d",power(a,n,1));
}