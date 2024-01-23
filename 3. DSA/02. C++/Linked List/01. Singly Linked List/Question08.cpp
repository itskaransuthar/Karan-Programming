// Delete without head pointer

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }
}*head = NULL;

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

//? Delete Node without using head pointer (Method 1)
void deleteNode1(Node *del)
{
    Node *temp = head;
   
    if(temp == del)
    {
        head = head -> next;
        delete del;
    }
   
    else 
    {
        while(temp -> next != del)
        {
            temp = temp -> next;
        }
           
        temp -> next = del -> next;
        delete del;
    }
}

//? Delete Node without using head pointer (Method 2)
void deleteNode2(Node *del)
{
    Node *temp = del -> next;
    del -> data = temp -> data;
    del -> next = temp -> next;
    delete temp;
}

//? Display Linked List
void displayList()
{
    cout << "Linked List: ";

    Node *read = head;
    while(read != NULL)
    {
        cout << read -> data << " ";
        read = read -> next;
    } cout << endl;
}

int main()
{
    int A[6] = {10, 20, 30, 40, 50, 60};

    head = NULL;
    head = createLL(A, 0, 6);

    displayList();

    deleteNode1(head -> next -> next -> next -> next -> next);
    displayList();

    deleteNode2(head -> next -> next);
    displayList();

    deleteNode2(head);
    displayList();
}  