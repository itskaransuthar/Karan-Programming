#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node * insertFirst(struct Node *head, int data)
{
    if(head == NULL)
    {
        head = (struct Node *) malloc (sizeof(struct Node));
        if(!head) return NULL;
        head -> data = data;
        head -> next = NULL;

        return head;
    }

    struct Node *temp = (struct Node *) malloc (sizeof(struct Node));
    if(!temp) return NULL;

    temp -> data = data;
    temp -> next = head;
    head = temp;

    return head;
}

void display(struct Node * head)
{
    struct Node *temp = head;

    printf("Printing Linked List: ");
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

    //? --------------------------------------- 
    int n;
    scanf("%d", &n);

    int *A = (int *) malloc (n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    //? ---------------------------------------

    for (int i = 0; i < n; i++)
        head = insertFirst(head, A[i]);

    display(head);
}

/*
INPUT:
5
10 20 30 40 50

OUTPUT:
Printing Linked List: 50 40 30 20 10
*/