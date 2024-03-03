#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* createNode(int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> next = NULL;
    newNode -> prev = NULL;
    Insert(newNode,data);
}

void Insert(struct node** head, int data)
{
    struct node* newNode = createNode(data);
    if(*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        newNode -> next = *head;
        (*head) -> prev = newNode;
        *head = newNode;
    }
}

void display(struct node* head)
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d <-> ",temp->data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

void main()
{
    struct node* head = NULL;
    int size;

    printf("Enter number of elements: ");
    scanf("%d",&size);

    int *arr = (int *)malloc(sizeof(int)*size);

    printf("Enter array elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<size; i++)
    {
        int left = 2*i+1;
        int right = 2*i+2;
        if(arr[left] = arr[i+1] && arr[right]==arr[i+2])
        {
            continue;
        }
        else
        {
            printf("Not a CBT!");
            break;
        }
    }

}