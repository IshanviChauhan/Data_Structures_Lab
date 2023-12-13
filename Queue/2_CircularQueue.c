//Program of Array Implementation of Circular Queue.
#include <stdio.h>
int q[100];
int n,item;
int front=-1;
int rear=-1;
int enqueue()
{
    if(front==0 && rear==n-1)
        printf("Overflow");
    else
    {
        if(front==-1)
        {
            front=0;
            rear=0;
            printf("Enter the element to be inserted:");
            scanf("%d",&item);
            q[rear]=item;
            printf("Item inserted in the queue:%d",q[rear]);
        }
        else if(rear==n-1)
        {
            rear=0;
            printf("Enter the element to be inserted:");
            scanf("%d",&item);
            q[rear]=item;
            printf("Item inserted in the queue:%d",q[rear]);
        }
        else
        {
            rear=rear+1;
            printf("Enter the element to be inserted:");
            scanf("%d",&item);
            q[rear]=item;
            printf("Item inserted in the queue:%d",q[rear]);
        }
    }
}
int dequeue()
{
    if(front==-1)
        printf("Underflow");
    else
    {
        item=q[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(front==n-1)
            front=0;
        else
            front=front+1;
    }
    printf("Element deleted:%d",item);
}
int display()
{
    for(int i=0;q[i]!='\0';i++)
    {
        printf("%d ",q[i]);
    }
}
void main()
{
    int choice;
    printf("Enter the size of queue:");
    scanf("%d",&n);
    do{
        printf("\n1. Insert 2. Delete 3. Display 4. Exit\nEnter your choice:");
        scanf("\n%d",&choice);
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
            printf("\nExit");
        }
    }while(choice<4);
}


