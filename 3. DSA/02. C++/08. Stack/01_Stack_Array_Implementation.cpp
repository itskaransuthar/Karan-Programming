#include <iostream>
#include <climits>
using namespace std;

class Stack {
    int *Arr;
    int size;
    int top;

public:
    Stack(int size)
    {w
        Arr = new int[size];
        this -> size = size;
        top = -1;
    }

    // Pushing a new element in a stack
    void push(int data)
    {
        if(top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        Arr[top] = data;
    }

    // Popping the latest element that added in a stack
    int pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow" << endl;
            return INT_MIN;
        }

        int temp = Arr[top];
        top--;
        
        return temp;
    }

    // Returns stack top most element 
    int peek()
    {
        if(top == -1)
        {
            cout << "Stack Underflow" << endl;
            return INT_MIN;
        }

        return Arr[top];
    }

    // Returns length of the stack
    int length()
    {
        return top + 1;
    }

    // Returns true if stack is empty, otherwise returns false
    bool empty()
    {
        if(top == -1)
            return true;
        else
            return false;
    }

    // Displaying the stack
    void display()
    {
        cout << "Printing Stack: ";
        for (int i = 0; i <= top; i++)
        {
            cout << Arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st(10); 
    // Stack of size 10 is created

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);
    st.push(100);

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    st.display();

    cout << "Top element of stack: " << st.peek() << endl;
    cout << "Length of the stack: " << st.length() << endl;
}