// Merge two sorted linked list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node()
    {

    }

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

    //? Insertion using Recursion
    Node * insertList(int arr[], int index, int size)
    {
        // Base Condition
        if(index == size)
            return NULL;

        // Recursive Call
        Node *temp = new Node(arr[index]);
        temp -> next = insertList(arr, index + 1, size);

        return temp;
    }

    //? Function to merge two sorted linked list
    Node* sortedMerge(Node* head1, Node* head2)  
    {  
        // Code here
        Node *head = NULL, *tail = NULL;
        
        if(head1 -> data <= head2 -> data)
        {
            head = tail = head1;
            head1 = head1 -> next;
            
            tail -> next = NULL;
        }
        else
        {
            head = tail = head2;
            head2 = head2 -> next;
            
            tail -> next = NULL;
        }
            
        while(head1 && head2)
        {
            if(head1 -> data <= head2 -> data)
            {
                tail -> next = head1;
                tail = head1;
                head1 = head1 -> next;
                
                tail -> next = NULL;
            }
            else
            {
                tail -> next = head2;
                tail = head2;
                head2 = head2 -> next;
                
                tail -> next = NULL;
            }
        }
        
        if(head1)
            tail -> next = head1;
        else
            tail -> next = head2;
            
        return head;
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
    int A[7] = {1, 3, 3, 5, 7};
    int B[7] = {2, 4, 6, 8, 10};
    // Insertion

    Node *head1 = NULL;
    head1 = head1 -> insertList(A, 0, 5);
    head1 -> displayList(head1);

    Node *head2 = NULL;
    head2 = head2 -> insertList(B, 0, 5);
    head2 -> displayList(head2);

    Node* head = Node().sortedMerge(head1, head2);
    head -> displayList(head);
}