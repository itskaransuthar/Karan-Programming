#include <iostream>
#include <climits>
using namespace std;

class Node 
{
public:

    int data;
    Node *next;

    Node (int data)
    {
        this -> data = data;
        next = NULL;
    }
};

class Stack {
    Node *top;

public:
 
    Stack()
    {
        top = NULL;
    }

    // Pushing a new element in a stack
    void push(int data)
    {
        if(!top)
        {
            top = new Node(data);
            return;
        }

        Node *temp = new Node(data);
        temp -> next = top;
        top = temp;

        return;
    }

    // Popping the latest element that added in a stack
    int pop()
    {
        if(!top)
        {
            cout << "Stack Underflow" << endl;
            return INT_MIN;
        }

        int ans = top -> data;
        top = top -> next;

        return ans;
    }

    // Returns stack top most element
    int peek()
    {
        if(!top)
        {
            cout << "Stack Underflow" << endl;
            return INT_MIN;
        }

        return top -> data;
    }

    // Returns true if stack is empty, otherwise returns false
    int length()
    {
        int count = 0;

        Node *temp = top;
        while(temp)
        {
            count++;
            temp = temp -> next;
        }

        return count;
    }

    // Returns true if stack is empty, otherwise returns false
    bool empty()
    {
        if(!top)
            return true;
        else
            return false;
    }

    // Displays the stack
    void recursiveDisplay(Node *temp)
    {
        if(temp == NULL)
            return;

        recursiveDisplay(temp -> next);
        cout << temp -> data << " ";
    }

    void display()
    {
        cout << "Displaying Stack: ";
        recursiveDisplay(top);
        cout << endl;
    }
};

int main()
{
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    st.pop();
    st.pop();
    st.pop();

    st.display();
    cout << "Size of stack: " << st.length() << endl;
    cout << "Top most element of stack: " << st.peek() << endl;
    
    if(st.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;
}