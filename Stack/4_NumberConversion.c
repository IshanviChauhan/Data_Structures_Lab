//Program for Decimal to Hexadecimal Conversion.
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

void display()
{
    if(top>=0)
    {
        printf("In Octal = ");
        for(int i=top; i>=0; i--)
        {
            printf("%X",stack[i]);
        }
    }
}

void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    while(num>0)
    {
        item = num%16;
        num = num/16;
        push(item);
    }

    display();
}

//Method - 2 : Directly display the element instead of pushing it