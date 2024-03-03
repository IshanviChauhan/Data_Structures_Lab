// To count and print preorder, inorder and postorder traversal of a tree

#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}

void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main(){
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(2);
    struct node *p1 = createNode(7);
    struct node *p2 = createNode(4);
    struct node *p3 = createNode(11);
    struct node *p4 = createNode(9);
    struct node *p5 = createNode(10);
    struct node *p6 = createNode(6);
    struct node *p7 = createNode(5);
    struct node *p8 = createNode(3);
    struct node *p9 = createNode(1);
    // Finally The tree looks like this:
    //          2
    //         / \
    //        7   4
    //       /   /
    //     11   9
    //     /\
    //    6  10
    //   /   /\
    //  5   3  1

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p2->left = p4;
    p3->left = p6;
    p3->right = p5;
    p6->left = p7;
    p5->left = p8;
    p5->right = p9;

    preOrder(p);
    printf("\n");
    postOrder(p);
    printf("\n");
    inOrder(p);
    return 0;
}