// Printing length of a singly linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node * insertLast(struct Node * root, int data)
{
    if(root == NULL)
    {
        root = (struct Node *) malloc (sizeof(struct Node));
        root -> data = data;
        root -> next = NULL;

        return root;
    }

    struct Node * temp = root;
    while(temp -> next)
    {
        temp = temp -> next;
    }

    temp -> next = (struct Node *) malloc (sizeof(struct Node));
    temp = temp -> next;
    temp -> data = data;
    temp -> next = NULL;

    return root;
}

void display(struct Node * root)
{
    struct Node * temp = root;

    printf("Printing Linked List: ");
    while(temp)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }

    printf("\n");
}

int lengthOfLL(struct Node *root)
{
    if(root == NULL)
        return 0;

    struct Node * temp = root;
    int count = 0;
    
    while(temp)
    {
        count++;
        temp = temp -> next;
    }

    return count;
}

int main()
{
    //? -----------------------------------------
    int n; 
    scanf("%d", &n);

    int *arr = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    //? -----------------------------------------

    struct Node * root = NULL;

    for (int i = 0; i < n; i++)
        root = insertLast(root, arr[i]);

    display(root);

    printf("Length of linked list: %d\n", lengthOfLL(root));
}

/*
INPUT:
5
10 20 30 40 50

OUTPUT:
Printing Linked List: 10 20 30 40 50 
Length of linked list: 5
*/