// Create Doubly Linked List Using Recursion

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *prev, *next;

    Node()
    {

    }

    Node (int data)
    {
        this -> data = data;
        prev = NULL;
        next = NULL;
    }

    //? Insertion Using Recursion (Method 1)
    Node* createDLL1(int *arr, int index, int size, Node *back)
    {
        // Base Condition
        if(index == size)
            return NULL;

        // Recursive Call
        Node *temp = new Node(arr[index]);
        temp -> prev = back;
        temp -> next = createDLL1(arr, index + 1, size, temp);
        return temp;
    }

    //? Insertion Using Recursion (Method 2)
    Node* createDLL2(int *arr, int index, int size, Node *back)
    {
        // Base Condition
        if(index == size)
            return back;

        // Recursive Call
        Node *temp = new Node(arr[index]);
        temp -> next = back;
        if(back) back -> prev = temp;
        
        return createDLL2(arr, index + 1, size, temp);
    }

    //? Display Linked List
    void displayList(Node *read)
    {
        cout << "Straight Linked List: ";
        while(read)
        {
            cout << read -> data << " ";
            read = read -> next;
        }

        cout << endl;
    }
};

int main()
{
    int A[6] = {10, 20, 30, 40, 50, 60};

    Node *head = NULL, *tail = NULL;

    // head = Node().createDLL1(A, 0, 6, NULL);
    head = Node().createDLL2(A, 0, 6, NULL);

    Node().displayList(head);
}