// Insert Element at Last (Method 2)

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
    Node * insertList1(int data, Node* head, Node* &tail)
    {
        if(head == NULL)
        {
            head = new Node(data);
            tail = head;
        }

        else
        {
            tail -> next = new Node(data);
            tail = tail -> next;
        }

        return head;
    }

    //* Insertion at Last (Method 2)
    void insertList2(int data, Node* &head, Node* &tail)
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
    void insertList3(int data, Node** head, Node **tail)
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
    Node * insertList4(int arr[], int index, int size)
    {
        if(index == size)
        {
            return NULL;
        }

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
    Node *tail = NULL;

    /*
    for (int i = 0; i < 6; i++)
    {
        if(head == NULL)
        {
            head = new Node(A[i]);
            tail = head;
        }

        else 
        {
            tail -> next = new Node(A[i]);
            tail = tail -> next;
        }
    }
    */

    /*
    for(int i = 0; i < 6; i++)
    {
        //* Method 1
        head = head -> insertList1(A[i], head, tail);

        //* Method 2
        head -> insertList2(A[i], head, tail);

        //* Method 3
        head -> insertList3(A[i], &head, &tail);
    }
    */

    head = head -> insertList4(A, 0, 6);

    head -> displayList(head);
}