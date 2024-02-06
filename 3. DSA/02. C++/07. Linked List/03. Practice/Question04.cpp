// Detect loop in Linked List

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

class Solution
{
    public:
    
    bool check(vector<Node *>visited, Node *curr)
    {
        for(int i = 0; i < visited.size(); i++)
        {
            if(curr == visited[i])
                return true;
        }
        
        return false;
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
    
    //? Function to check if the linked list has a loop (Method 1)
    bool detectLoop1(Node* head)
    {
        // Your Code Here 
        vector<Node *> visited;
        Node *curr = head;
        
        while(curr)
        {
            if(check(visited, curr))
                return true;
                
            visited.push_back(curr);
            curr = curr -> next;
        }
        
        return false;
    }

    //? Function to check if the linked list has a loop (Method 2)
    bool detectLoop2(Node* head)
    {
        unordered_map<Node *, int> visited;
        Node *curr = head;
        
        while(curr)
        {
            if(visited[curr] == 1)
                return 1;
                
            visited[curr] = 1;
            curr = curr -> next;
        }
        
        return false;
    }

    //? Function to check if the linked list has a loop (Method 3)
    bool detectLoop3(Node *head)
    {
        // Your Code Here
        Node *slow = head, *fast = head;
        
        while(slow && fast && fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow == fast)
                return true;
        }
        
        return false;
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
    int A[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    Node *head = NULL;
    Solution obj;

    head = obj.insertList(A, 0, 12);

    Node *tail = head;
    while(tail -> next != NULL)
    {
        tail = tail -> next;
    }

    tail -> next = head -> next -> next -> next;

    if(obj.detectLoop1(head))
        cout << "Loop exists in linked list" << endl;
    else
        cout << "No loop exists in linked list" << endl;
}