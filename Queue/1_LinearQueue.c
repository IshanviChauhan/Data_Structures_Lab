//Program of Array Implementation of Linear Queue.
#include<stdio.h>
int n, item, queue[50], front = -1, rear = -1;

int enqueue()
{
    if(front==0 && rear==n-1)
    {
        printf("\nOverflow");
    }
    else if(front==-1)
    {
        front = 0;
        rear = 0;
        printf("\nEnter item to insert: ");
        scanf("%d",&item);
        queue[rear] = item;
    }
    else
    {
        printf("\nEnter item to insert: ");
        scanf("%d",&item);
        rear = rear+1;
        queue[rear] = item;
    }
}

int dequeue()
{
    if(front==-1)
    {
        printf("Underflow\n");
    }
    item = queue[front];
    printf("Item deleted = %d\n",item);
    if(front==rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = front+1;
    }
}

int display()
{
    for(int i=front; i<=rear; i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}

void main()
{
    int choice;
    printf("Enter size of queue: ");
    scanf("%d",&n);
    do
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\nChoose one option: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                printf("Exit!");
        }
    }while(choice<4);
}