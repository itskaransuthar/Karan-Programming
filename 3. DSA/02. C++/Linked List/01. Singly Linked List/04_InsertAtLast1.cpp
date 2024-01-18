#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    //* Constructor
    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }

    //* Insertion at Last (Method 1)
    Node * insertList1(int data, Node* head)
    {
        if(head == NULL)
        {
            head = new Node(data);
        }

        else
        {
            Node *tail = head;

            while(tail -> next != NULL)
            {
                tail = tail -> next;
            }

            tail -> next = new Node(data);
        }

        return head;
    }

    //* Insertion at Last (Method 2)
    void insertList2(int data, Node* &head)
    {
        if(head == NULL)
        {
            head = new Node(data);
        }

        else
        {
            Node *tail = head;

            while(tail -> next != NULL)
            {
                tail = tail -> next;
            }

            tail -> next = new Node(data);
        }
    }

    //* Insertion at Last (Method 3)
    void insertList3(int data, Node** head)
    {
        if(*head == NULL)
        {
            *head = new Node(data);
        }

        else
        {
            Node *tail = *head;
            while(tail -> next != NULL)
            {
                tail = tail -> next;
            }

            tail -> next = new Node(data);
        }
    }

    //* Insertion using Recursion
    Node * insertList4(int *arr, int index, int size)
    {
        // Base Condition
        if(index == size)
        {
            return NULL;
        }

        // Recursive Call
        Node *newNode = new Node(arr[index]);
        newNode -> next = insertList4(arr, index + 1, size);

        return newNode;
    }

    //* Display Linked List
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

    Node *head = NULL;

    /*
    for (int i = 0; i < 6; i++)
    {
        if(head == NULL)
            head = new Node(A[i]);

        else 
        {
            while(tail -> next != NULL)
            {
                tail = tail -> next;
            }

            tail -> next = new Node(A[i]);
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

    head = head -> insertList4(A, 0, 6);

    head -> displayList(head);
}