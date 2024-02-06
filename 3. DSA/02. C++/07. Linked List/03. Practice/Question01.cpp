// Remove duplicate elements from sorted list

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

    //? Function to remove duplicates from sorted linked list.
    Node *removeDuplicates(Node *head)
    {
        // If list is empty or having only one element
        if(head == NULL || head -> next == NULL)
            return head;
            
        // If list is having more than 1 element
        Node *prev = head, *curr = head -> next;
        
        while(curr)
        {
            if(prev -> data == curr -> data)
            {
                prev -> next = curr -> next;
                delete curr;
                curr = prev -> next;
            }
            
            else
            {
                curr = curr -> next;
                prev = prev -> next;
            }
        }
        
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
    int A[7] = {2, 2, 2, 3, 3, 4, 4};
    // Insertion

    Node *head = NULL;

    head = head -> insertList(A, 0, 7);
    head -> displayList(head);

    head -> removeDuplicates(head);
    head -> displayList(head);
}