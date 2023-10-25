//Program for Decimal to Any Base Conversion.
//A=10, B=11, C=12, D=13, E=14, F=15
#include<stdio.h>
int top=-1, stack[50], item;

void push(int item)
{
    if(top > 50)
    {
        printf("Stack Overflow");
    }
    else
    {
        top = top+1;
        stack[top] = item;
    }
}

void display(int base)
{
    if(top>=0)
    {
        printf("In base %d = ",base);
        for(int i=top; i>=0; i--)
        {
            printf("%X",stack[i]);
        }
    }
}

void main()
{
    int num, base;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter base value : ");
    scanf("%d",&base);

    while(num>0)
    {
        item = num%base;
        num = num/base;
        push(item);
    }

    display(base);
}