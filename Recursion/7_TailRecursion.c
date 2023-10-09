//Program to reverse the given number using Recursion.
#include <stdio.h>
int reverse(int n, int s)
{
    if(n==0)
    {
        return s;
    }
    return reverse(n/10,(s*10)+(n%10));
}
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is :%d", num,reverse(num,0));
}