#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

int lengthOfLL(struct Node * root)
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

struct Node * insertPosition(struct Node * root, int data, int position)
{
    // For invalid input
    if(position < 1)
        return root;

    // Inserting at any position
    if(root == NULL)
    {
        root = (struct Node *) malloc (sizeof(struct Node));
        root -> data = data;
        root -> next = NULL;

        return root;
    }

    if(position == 1)
    {
        struct Node * newNode = (struct Node *) malloc (sizeof(struct Node));
        newNode -> data = data;
        newNode -> next = root;
        root = newNode;

        return root;
    }

    struct Node * temp = root;
    position--;

    while(--position)
        temp = temp -> next;

    struct Node * newNode = (struct Node *) malloc (sizeof(struct Node));
    newNode -> data = data;

    newNode -> next = temp -> next;
    temp -> next = newNode;

    return root;
}

void display(struct Node * root)
{
    printf("Printing Linked List: ");
    
    struct Node * temp = root;
    while(temp)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }

    printf("\n");
}

int main()
{
    struct Node * root = NULL;

    // Inserting Data
    while(1)
    {
        int data, position;
        scanf("%d %d", &data, &position);

        if(position == -1)
            break;

        root = insertPosition(root, data, position);
    }

    display(root);
}

/*
INPUT:
2 0
12 0
22 1
32 1
42 2
52 2
62 3
72 3
82 4
92 4
102 -1

OUTPUT:
Printing Linked List: 32 52 72 92 82 62 42 22
*/