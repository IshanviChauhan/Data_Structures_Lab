//Program for Towers of Hanoi for n disk (user defined)
#include <stdio.h>
void TOH(int n, char a, char b, char c)
{
    if(n==1)
    {
        printf("Move %d disc from %c to %c\n",n,a,c);
        return;
    }
    
    TOH(n-1,a,c,b);

    printf("Move %d disc form %c to %c\n",n,a,c);

    TOH(n-1,b,a,c);
}
void main()
{
    int n;
    printf("Enter the number of disks (1<n<64): ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
}