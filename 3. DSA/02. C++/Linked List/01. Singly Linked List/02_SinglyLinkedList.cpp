#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }

    void displayList(Node *read)
    {
        cout << "Linked Lists: ";
        while(read != NULL)
        {
            cout << read -> data << " ";
            read = read -> next;
        } cout << endl;
    }
};

int main()
{
    //? 60 40 20 50 10 30

    //* Create a node having value 10
    Node *head = NULL;
    head = new Node(10);

    head -> displayList(head);

    //* Insert a node having value 20 at first
    Node *p = NULL;
    p = new Node(20);
    p -> next = head;
    head = p;

    head -> displayList(head);

    //* Insert a node having value 30 at last
    p = new Node(30);
    p -> data = 30;
    p -> next = NULL;
    head -> next -> next = p;

    head -> displayList(head);

    //* Insert a node having value 40 at first  
    p = new Node(40);
    p -> data = 40;
    p -> next = NULL;
    p -> next = head;
    head = p;

    head -> displayList(head);

    //* Insert a node having value 50 at 3rd position
    p = new Node(50);
    p -> data = 50;
    p -> next = NULL;
    p -> next = head -> next -> next;
    head -> next -> next = p;

    head -> displayList(head);

    //* Insert a node having value 60 at first position
    p = new Node(60);
    p -> data = 60;
    p -> next = NULL;
    p -> next = head;
    head = p;

    head -> displayList(head);
}