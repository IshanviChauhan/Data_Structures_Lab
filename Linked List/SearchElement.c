//Search element in list
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

void search()
{
    int flag=0, ele;
    struct node *tmp;
    printf("Enter element to be searched: ");
    scanf("%d",&ele);
    if(stnode == NULL)
    {
        printf("List is empty");
    }
    else
    {
        int count = 0;
        tmp = stnode;
        while(tmp != NULL)
        {
            if(tmp->num == ele)
            {
                count = count + 1;
                printf("Element found in node %d",count+1);
                flag=1;
                break;
            }
            tmp = tmp->nextptr;
        }
    }
    if(flag==0)
    {
        printf("Element does not exist in list!");
    }
}

int main()
{
    int n;
    printf("\n\nSingly Linked List");
    printf("\n.....................");

    printf("\nInput the number of nodes: ");
    scanf("%d",&n);
    createNodeList(n);
    search();
    return 0;
}
