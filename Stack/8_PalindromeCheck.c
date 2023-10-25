//Program to check if the given number is a palindrome using stacks.
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

void main()
{
    int num, temp, p, count=0;
    printf("Enter number: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        item = temp%10;
        count ++;
        temp = temp/10;
        push(item);
    }

    for(int i=0; i<count; i++, top--)
    {
        if(num%10 != stack[top])
        {
            p = 1;
            break;
        }
        else
        {
            p = 0;
            num = num/10;
        }
    }

    if(p==0)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }
}
