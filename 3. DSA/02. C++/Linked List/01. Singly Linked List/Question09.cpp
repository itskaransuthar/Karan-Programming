// Reverse Linked List

#include <bits/stdc++.h>
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

//? Reverse Linked List (Method 1)
Node * reverseLL1(Node *head)
{
    vector<int> ans;

    Node *temp = head;
    while(temp != NULL)
    {
        ans.push_back(temp -> data);
        temp = temp -> next;
    }

    int i = ans.size() - 1;
    temp = head;

    while(temp != NULL)
    {
        temp -> data = ans[i--];
        temp = temp -> next;
    }

    return head;
}

//? Reverse Linked List (Method 2)
Node * reverseLL2(Node *head)
{
    if(head == NULL)
        return NULL;
    
    Node *पिछला = NULL, *curr = head, *अगला = head -> next;
    while(curr != NULL)
    {
        curr -> next = पिछला;
        पिछला = curr;
        curr = अगला;
        if(अगला != NULL) अगला = अगला -> next;
    }

    return पिछला;
}

//? Reverse Linked List Using Recursion (Method 3)
Node * reverseLL3(Node *पिछला, Node *curr)
{
    // Base Condition
    if(curr == NULL)
        return पिछला;

    // Recursive Call
    Node *अगला = curr -> next;
    curr -> next = पिछला;
    return reverseLL3(curr, अगला);
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
    head = createLL(A, 0, 4);

    displayList();

    head = reverseLL1(head);
    head = reverseLL2(head);
    head = reverseLL3(NULL, head);
    displayList();
}  