//Height of Tree
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node *left;
    struct node *right;
}*stnode;

struct node *newnode(int data)
{
    struct node *node = (struct node*)malloc(sizeof(struct node));
    node -> key = data;
    node -> left = NULL;
    node -> right = NULL;
    return (node);
}

int max(int value1, int value2)
{
    if(value1 > value2)
    {
        return value1;
    }
    else
    {
        return value2;
    }
}

int height(struct node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return max(height(root -> left),height(root -> right))+1;
}

void main()
{
    struct node *root = newnode(1);
    root -> left = newnode(2);
    root -> right = newnode(3);
    root -> left -> left = newnode(4);
    root -> left -> right = newnode(5);
    root -> right -> right = newnode(6);
    root -> right -> right -> right = newnode(7);
    printf("Height of tree = %d",height(root));
}