#include <stdio.h>
#include "stack.c"
#include <stdlib.h>

struct Node * insertRoot(struct Node *, int);
struct Node * insertLeftChild(struct Node *, int);
struct Node * insertRightChild(struct Node *, int);
void inorderTraversalRecursive(struct Node *);
void inorderTraversalIterative(struct Node *);

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

    // Inorder Traversal
    printf("Inorder Traversal Using Recursion: ");
    inorderTraversalRecursive(root);
    printf("\n");

    printf("Inorder Traversal Using Iteration: ");
    inorderTraversalIterative(root);
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

// Inorder Traversal Recursive Approach
void inorderTraversalRecursive(struct Node * root)
{
    // Base Condition
    if(root == NULL)
        return;

    // Recursion
    inorderTraversalRecursive(root -> left);
    printf("%d ", root -> data);
    inorderTraversalRecursive(root -> right);
}

// Inorder Traversal Iterative Approach
void inorderTraversalIterative(struct Node * root)
{
    struct Stack * S = createStack(10);
    push(S, root);
}