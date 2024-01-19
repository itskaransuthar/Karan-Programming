/*
Deletion 
    1. Delete first node
    2. Delete last node
    3. Delete particular node
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data)
    {
        this -> data = data;
    }

    //? Create Linked List
    Node * createLL(int *arr, int index, int size)
    {
        // Base Condition
        if(index == size)
            return NULL;

        // Recursive Call
        Node *temp = new Node(arr[index]);
        temp -> next = createLL(arr, index + 1, size);

        return temp;
    }

    //? Delete First Node
    Node * deleteFirstNode(Node *head)
    {
        if(head == NULL)    
            return NULL;

        Node *temp = head;
        head = head -> next;
        delete temp;

        return head;
    }

    //? Delete From Last
    Node * deleteLastNode(Node *head)
    {
        if(head == NULL)
            return NULL;

        if(head -> next == NULL)
        {
            delete head;
            head = NULL;

            return head;
        }

        Node *temp = head;
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        delete temp -> next;
        temp -> next = NULL;

        return head;
    }

    //? Delete from given Position (Iteration)
    Node * deleteNode1(Node* head, int position)
    {
        // If no node is present in linked list
        if(head == NULL)
            return NULL;
        
        // If only node is present in linked list
        if(position == 1)
        {
            Node *temp = head;
            head = head -> next;
            delete temp;

            return head;
        }

        // More than one node is present in linked list
        Node *curr = head;
        Node *prev = NULL;

        while(--position)
        {
            prev = curr;
            curr = curr -> next;
        }
        
        prev -> next = curr -> next;
        delete curr;

        return head;
    }

    //? Delete from given Position (Recursion)
    Node * deleteNode2(Node* curr, int position)
    {
        // Base Condition
        if(position == 1)
        {
            return curr -> next;
            delete curr;
        }

        // Recursive Call
        curr -> next = deleteNode2(curr -> next, position - 1);
        return curr;
    }

    //? Display Linked List
    void displayList(Node *read)
    {
        cout << "Linked List: ";
        while(read != NULL)
        {

            cout << read -> data << " ";
            read = read -> next;
        } cout << endl;
    }
};

int main()
{
    int A[6] = {10, 20, 30, 40, 50, 60};

    Node *head = NULL;
    head = head -> createLL(A, 0, 6);

    head -> displayList(head);

    head = head -> deleteFirstNode(head);
    head -> displayList(head);

    head = head -> deleteLastNode(head);
    head -> displayList(head);

    head = head -> deleteNode2(head, 1);
    head -> displayList(head);
}  