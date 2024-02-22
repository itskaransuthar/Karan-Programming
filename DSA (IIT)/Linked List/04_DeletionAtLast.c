#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node * insertLast(struct Node * head, int data)
{
    if(head == NULL)
    {
        head = (struct Node *) malloc (sizeof(struct Node));
        if(!head) return NULL;

        head -> data = data;
        head -> next = NULL;

        return head;
    }

    struct Node * temp = head;
    while(temp -> next)
        temp = temp -> next;

    temp -> next = (struct Node *) malloc (sizeof(struct Node));
    temp = temp -> next;
    temp -> data = data;
    temp -> next = NULL;

    return head;
}

struct Node * deleteLast(struct Node * head)
{
    if(head == NULL)
        return NULL;

    if(head -> next == NULL)
    {
        free(head);
        head = NULL;
        return NULL;
    }

    struct Node * temp = head;
    while(temp -> next -> next)
        temp = temp -> next;

    free(temp -> next);
    temp -> next = NULL;

    return head;
}

void display(struct Node *head)
{
    struct Node * temp = head;

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
    //? ------------------------------------------
    int n;
    scanf("%d", &n);

    int *arr = (int *) malloc (n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    //? ------------------------------------------

    struct Node * head = NULL;

    for (int i = 0; i < n; i++)
        head = insertLast(head, arr[i]);
    
    display(head);

    head = deleteLast(head);
    head = deleteLast(head);

    display(head);
}