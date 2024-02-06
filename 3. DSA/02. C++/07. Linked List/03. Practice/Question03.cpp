// Sort a linked list of 0s, 1s and 2s

#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

class Solution
{
    public:

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

    //? Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) 
    {
        // Add code here
        int countZero = 0, 
            countOne = 0, 
            countTwo = 0;
            
        Node *curr = head;
        
        while(curr)
        {
            if(curr -> data == 0) countZero++;
            if(curr -> data == 1) countOne++;
            if(curr -> data == 2) countTwo++;
            
            curr = curr -> next;
        }
        
        curr = head;
        
        while(countZero--) {
            curr -> data = 0;
            curr = curr -> next;
        }
        
        while(countOne--) {
            curr -> data = 1;
            curr = curr -> next;
        }
        while(countTwo--) {
            curr -> data = 2;
            curr = curr -> next;
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
    int A[6] = {0, 2, 2, 1, 1, 0};

    Solution obj;
    Node *head = obj.insertList(A, 0, 6);

    obj.displayList(head);

    head = obj.segregate(head);

    obj.displayList(head);
}