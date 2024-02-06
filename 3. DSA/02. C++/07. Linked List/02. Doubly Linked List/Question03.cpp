// Insert at any position

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

    //? Insertion at any position
    void InsertAny(Node* &head, Node* &tail, int data, int position)
    {   
        if(head == NULL)
        {
            Node * temp = new Node(data);
            head = tail = temp;
            temp = NULL;

            return;
        }

        if(position == 0)
        {
            Node *temp = new Node(data);
            head -> prev = temp;
            temp -> next = head;
            head = temp;
            temp = NULL;

            return;
        }

        Node* curr = head;
        while(--position)
        {
            curr = curr -> next;
        }

        Node *temp = new Node(data);
        
        // Insert at middle
        temp -> next = curr -> next;
        if(curr -> next) curr -> next -> prev = temp;
        temp -> prev = curr;
        curr -> next = temp;

        if(temp -> next == NULL)
            tail = temp;
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

    head -> InsertAny(head, tail, 55, 6); //! Note: 0 based indexing
    head -> InsertAny(head, tail, 65, 3);
    head -> InsertAny(head, tail, 65, 0);

    head -> displayList(head);
    head -> displayReverseList(tail);
}