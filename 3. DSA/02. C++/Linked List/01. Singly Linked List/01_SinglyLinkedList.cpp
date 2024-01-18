#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void displayList(Node *);

int main()
{
    //? 60 40 20 50 10 30

    //* Create a node having value 10
    Node *head = NULL;
    head = new Node;
    head -> data = 10;
    head -> next = NULL;

    displayList(head);

    //* Insert a node having value 20 at first
    Node *p = NULL;
    p = new Node();
    p -> data = 20;
    p -> next = NULL;
    p -> next = head;
    head = p;

    displayList(head);

    //* Insert a node having value 30 at last
    p = new Node;
    p -> data = 30;
    p -> next = NULL;
    head -> next -> next = p;

    displayList(head);

    //* Insert a node having value 40 at first  
    p = new Node();
    p -> data = 40;
    p -> next = NULL;
    p -> next = head;
    head = p;

    displayList(head);

    //* Insert a node having value 50 at 3rd position
    p = new Node();
    p -> data = 50;
    p -> next = NULL;
    p -> next = head -> next -> next;
    head -> next -> next = p;

    displayList(head);

    //* Insert a node having value 60 at first position
    p = new Node;
    p -> data = 60;
    p -> next = NULL;
    p -> next = head;
    head = p;

    displayList(head);
}

void displayList(Node *read)
{
    cout << "Linked Lists: ";
    while(read != 0)
    {
        cout << read -> data << " ";
        read = read -> next;
    }
    cout << endl;

    /*
    Linked Lists: 10 
    Linked Lists: 20 10 
    Linked Lists: 20 10 30 
    Linked Lists: 40 20 10 30 
    Linked Lists: 40 20 50 10 30 
    Linked Lists: 60 40 20 50 10 30 
    */
}