// Remove every kth Node

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

//? Creating a Linked List
Node *createLL(int *A, int index, int size)
{
    // Base Case
    if(index == size)
        return NULL;

    // Recursive Call
    Node *temp = new Node(A[index]);
    temp -> next = createLL(A, index + 1, size);

    return temp;
}

//? Remove every kth Node
Node* deleteK(Node *head, int K)
{
    //Your code here
    if(K == 1)
        return NULL;
        
    Node *prev = NULL, *curr = head;
    
    int count = 1;
    while(curr != NULL)
    {
        if(count == K)
        {
            prev -> next = curr -> next;
            delete curr;
            
            curr = prev -> next;
            count = 1;
        }
        else
        {
            prev = curr;
            curr = curr -> next;  
            count++;
        }
    }
    
    return head;
}

//? Displaying Linked List
void displayList(Node *read)
{
    cout << "Linked List: ";
    while(read)
    {
        cout << read -> data << " ";
        read = read -> next;
    }

    cout << endl;
}

int main()
{
    int A[6] = {10, 20, 30, 40, 50, 60};

    Node *head = NULL;
    head = createLL(A, 0, 6);

    displayList(head);

    head = deleteK(head, 3);
    // head = deleteK(head, 2);
    // head = deleteK(head, 1);

    displayList(head);
}
