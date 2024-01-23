// Insert Element at First

/*
Basic Operations in Linked List:
    Insertion
        Insertion at first
        Insertion at last
        Insertion at any position
    Deletion
    Search
    Update
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

    //? Insertion at first (Method 1)
    Node * insertList1(int data, Node* head)
    {
        if(head == NULL)
        {
            head = new Node(data);
        }

        else {
            Node *p = new Node(data);
            p -> next = head;
            head = p;
        }

        return head;
    }

    //? Insertion at first (Method 2)
    void insertList2(int data, Node* &head)
    {
        if(head == NULL)
        {
            head = new Node(data);
        }

        else {
            Node *p = new Node(data);
            p -> next = head;
            head = p;
        }
    }

    //? Insertion at first (Method 3)
    void insertList3(int data, Node** head)
    {
        if(head == NULL)
        {
            *head = new Node(data);
        }

        else {
            Node *p = new Node(data);
            p -> next = *head;
            *head = p;
        }
    }

    //? Insertion using Recursion (Method 1)
    Node * insertList4(int arr[], int index)
    {
        // Base Condition
        if(index == -1)
            return NULL;

        // Recursive Call
        Node *newNode = new Node(arr[index]);
        newNode -> data = arr[index];
        newNode -> next = insertList4(arr, index - 1);

        return newNode;
    }

    //? Insertion using Recursion (Method 2)
    Node * insertList5(int *arr, int index, int size, Node * prev)
    {
        // Base Condition
        if(index == size)
            return prev;

        // Recursive Call
        Node *newNode = new Node(arr[index]);
        newNode -> next = prev;
        
        return insertList5(arr, index + 1, size, newNode);
    }

    //? Display Linked List
    void displayList(Node *read)
    {
        cout << "Linked Lists: ";
        while (read!= NULL)
        {
            cout << read->data << " ";
            read = read->next;
        }
        cout << endl;
    }
};

int main()
{
    int A[6] = {10, 20, 30, 40, 50, 60};
    // Insertion

    Node *head = NULL;

    /*
    for(int i = 0; i < 6; i++)
    {
        if(head == NULL)
        {
            head = new Node(A[i]);
        }

        else 
        {
            Node *p = new Node(A[i]);
            p -> next = head;
            head = p;
        } 
    }
    */

    /*
    for(int i = 0; i < 6; i++)
    {   
        //* Method 1
        head = head -> insertList1(A[i], head);

        //* Method 2
        head -> insertList2(A[i], head);

        //* Method 3
        head -> insertList3(A[i], &head);
    }
    */

    // head = head -> insertList4(A, 5);
    head = head -> insertList5(A, 0, 6, NULL);

    head -> displayList(head);
}