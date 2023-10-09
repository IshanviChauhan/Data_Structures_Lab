//Finding sum of the digits of the number.
#include <stdio.h>
int sumDigits(int n, int s)
{
    if(n==0)
    {
        return s;
    }
    return sumDigits(n/10,s+(n%10));
}
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Sum of Digits = %d",sumDigits(num,0));
}