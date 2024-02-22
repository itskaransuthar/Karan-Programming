#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    Node *next;
};

struct Node * insertAtLast(struct Node *head, int data)
{
    if(head == NULL)
    {
        head = (struct Node *) malloc (sizeof(struct Node));
        if(!head) return NULL;
        head -> data = data;
        head -> next = NULL;

        return head;
    }

    struct Node *temp = head;
    
    while(temp -> next)
        temp = temp -> next;

    temp -> next = (struct Node *) malloc (sizeof(struct Node));
    if(!temp -> next) return NULL;
    temp = temp -> next;
    temp -> data = data;
    temp -> next = NULL;

    return head;
}

void display(struct Node *head)
{
    struct Node *temp = head;

    printf("Displaying Linked List: ");
    while(temp)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }

    printf("\n");
}

int main()
{
    struct Node *head = NULL;

    //? ---------------------------------------------------------
    int n;
    scanf("%d", &n);

    unsigned int *A = (unsigned int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    //? ---------------------------------------------------------

    for (int i = 0; i < n; i++)
        head = insertAtLast(head, A[i]);   

    display(head); 
}

/*
INPUT:
5 
10 20 30 40 50

OUTPUT:
Displaying Linked List: 10 20 30 40 50
*/