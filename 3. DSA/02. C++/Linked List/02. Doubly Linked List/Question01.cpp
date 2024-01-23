// Create Doubly Linked List

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *prev, *next;

    Node()
    {

    }

    Node (int data)
    {
        this -> data = data;
        prev = NULL;
        next = NULL;
    }

    //? Insertion at First
    void insertFirst(Node **head, Node **tail, int data)
    {
        if(*head == NULL)
        {
            *head = new Node(data);
            *tail = *head;
            return;
        }

        Node *temp = new Node(data);
        (*head) -> prev = temp;
        temp -> next = *head;
        *head = temp;
    }

    //? Insertion at last
    void insertLast(Node **head, Node **tail, int data)
    {
        if(*head == NULL)
        {
            *head = new Node(data);
            *tail = *head;
            return;
        }

        Node *temp = new Node(data);
        (*tail) -> next = temp;
        temp -> prev = *tail;
        *tail = temp;
    }

    //? Display Linked List
    void displayList(Node *read)
    {
        cout << "Straight Linked List: ";
        while(read)
        {
            cout << read -> data << " ";
            read = read -> next;
        }

        cout << endl;
    }

    //? Display Reverse of Linked List
    void displayReverseList(Node *read)
    {
        cout << "Reversed Linked List: ";
        while(read)
        {
            cout << read -> data << " ";
            read = read -> prev;
        }

        cout << endl;
    }
};

int main()
{
    int A[6] = {10, 20, 30, 40, 50, 60};

    Node *head = NULL, *tail = NULL;
    
    for(int i = 0; i < 6; i++)
    {
        Node().insertLast(&head, &tail, A[i]);
        // Node().insertFirst(&head, &tail, A[i]);
    }

    Node().displayList(head);
    Node().displayReverseList(tail);
}