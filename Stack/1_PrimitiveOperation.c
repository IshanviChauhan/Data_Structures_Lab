//Program for Stack Primitive Operations.
#include<stdio.h>
int top=-1, stack[50], n, item;

void push()
{
    if(top >= n-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top = top+1;
        printf("Enter element to be inserted: ");
        scanf("%d",&item);
        stack[top] = item;
    }
}

void pop()
{
    if(top <= -1)
    {
        printf("Underflow");
    }
    else
    {
        item = stack[top];
        printf("Deleted element %d",item);
        top = top-1;
    }
}

void display()
{
    if(top>=0)
    {
        for(int i=top; i>=0; i--)
        {
            printf("%d ",stack[i]);
        }
    }
}
void main()
{
    int choice;
    printf("\nStack Operation Program");
    printf("\nEnter the size of your array: ");
    scanf("%d",&n);
   
    do
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            
            case 2:
                pop();
                break;
            
            case 3:
                display();
                break;
            
            default:
                printf("Exit!");
            
        }
    }while(choice<4);
}


