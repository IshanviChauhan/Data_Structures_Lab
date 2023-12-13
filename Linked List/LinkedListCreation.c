//Create a list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int num;
    struct node *nextptr;
}*stnode;

void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL) //Check whether the fnNode node is NULL and if so no memory can be allocated
    {
        printf("Memory can not be allocated");
    }
    else
    {
        //Reads data for the node through keyboard
        printf("Input data for node 1: ");
        scanf("%d",&num);
        stnode->num = num;
        stnode->nextptr = NULL; //links the address field to NULL
        tmp = stnode;

        //Creating n nodes and adding to linked list
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf("Memory can not be allocated");
                break;
            }
            else
            {
                printf("Input data for node %d: ",i);
                scanf("%d",&num);

                fnNode->num = num; //links the num field of fnNode with num
                fnNode->nextptr = NULL; //links the address field of fnNode with NULL

                tmp->nextptr = fnNode; //links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr;
            }
        }
    }
}

void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf("List is empty");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf("\nData = %d",tmp->num);
            tmp = tmp->nextptr;
        }
    }
}

int main()
{
    int n;
    printf("\n\nLinked List : To create and display Singly Linked List");
    printf("\n..........................................................");

    printf("\nInput the number of nodes: ");
    scanf("%d",&n);
    createNodeList(n);
    printf("\nData entered in the list:");
    displayList();
    return 0;
}
