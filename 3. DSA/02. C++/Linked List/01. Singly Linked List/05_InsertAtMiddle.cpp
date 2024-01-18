#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node * next;

    Node (int data)
    {
        this -> data = data;
    }

    //? Creating Linked List
    Node * createLL(int *arr, int index, int size)
    {
        // Base Condition
        if(index == size)
            return NULL;

        // Recursive Call
        Node *newNode = new Node(arr[index]);
        newNode -> next = createLL(arr, index + 1, size);

        return newNode;
    }

    //? Insertion at Middle
    void insertAtMiddle(Node* &head, int data, int position) 
    {
        Node * temp = head;

        if(position == 1)
        {
            Node *newNode = new Node(data);

            newNode -> next = head;
            head = newNode;

            return;
        }

        int count = 1;

        while(temp != NULL && count < position - 1)
        {
            temp = temp -> next;
            count++;
        }

        if(temp == NULL)
            return;

        Node *newNode = new Node(data);
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }

    //? Displaying Linked List
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
    int A[4] = {2, 4, 6, 8};

    Node *head = NULL;
    head = head -> createLL(A, 0, 4);

    // head -> displayList(head);

    head -> insertAtMiddle(head, 5, 1);

    head -> displayList(head);
}