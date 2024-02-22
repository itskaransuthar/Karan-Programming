#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *left;
    int data;
    struct Node *right;
};

struct Node * insertRoot(struct Node *, int);
struct Node * insertLeftChild(struct Node *, int);
struct Node * insertRightChild(struct Node *, int);

int main()
{
    struct Node * root = NULL;

    root = insertRoot(root, 5);
    root = insertLeftChild(root, 10);
    root = insertRightChild(root, 25);

    printf("%d\n", root -> data);
    printf("%d\n", root -> left -> data);
    printf("%d\n", root -> right -> data);

    root = insertLeftChild(root, 15);
    root -> left = insertRightChild(root -> left, 17);

    printf("%d\n", root -> left -> left -> data);
    printf("%d\n", root -> left -> right -> data);
}

// Inserting root node to the tree
struct Node * insertRoot(struct Node *root, int data)
{
    if(root != NULL)
        return NULL;

    root = (struct Node *) malloc (sizeof(struct Node));
    root -> data = data;
    return root;
}

// Inserting left child to the tree 
struct Node * insertLeftChild(struct Node *root, int data)
{
    if(root == NULL)
        return NULL;

    struct Node *temp = root;

    while(temp -> left)
    {
        temp = temp -> left;
    }

    temp -> left = (struct Node *) malloc (sizeof(struct Node));
    temp -> left -> data = data;

    return root;
}

// Inserting right child to the tree
struct Node * insertRightChild(struct Node *root, int data)
{
    if(root == NULL)    
        return NULL;

    struct Node *temp = root;

    while(temp -> right)
    {
        temp = temp -> right;
    }

    temp -> right = (struct Node *) malloc (sizeof(struct Node));
    temp -> right -> data = data;

    return root;
}