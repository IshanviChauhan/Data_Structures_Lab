//Program for finding GCD of two numbers using Recursion.
#include <stdio.h>
int gcd(int a, int b)
{
    if(a%b == 0)
    {
        return b;
    }
    return gcd(b,a%b);
}
void main()
{
    int num1, num2;
    printf("Enter number 1 and number 2: ");
    scanf("%d %d", &num1,&num2 );
    printf("GCD = %d",gcd(num1,num2));
}