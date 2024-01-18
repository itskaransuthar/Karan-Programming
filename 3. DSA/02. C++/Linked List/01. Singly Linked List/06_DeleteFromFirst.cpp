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

    //? Delete from given Position
    Node * deletePositionalNode(Node* head, int position)
    {
        if(head == NULL)
            return NULL;
        
        if(position == 1 && head -> next == NULL)
        {
            delete head;
            head = NULL;

            return head;
        }

        Node *curr = head;
        Node *prev = NULL;

        for(int i = 1; i < position; i++)
        {
            prev = curr;
            curr = curr -> next;
        }

        if(prev == NULL)
        {
            head = head -> next;
            delete curr;
            curr = NULL;
        }
        else 
        {
            prev -> next = curr -> next;
            delete curr;
        }

        return head;
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

    head = head -> deletePositionalNode(head, 1);
    head -> displayList(head);
}  