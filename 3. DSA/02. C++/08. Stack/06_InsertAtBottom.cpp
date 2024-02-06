// Insert an element at the bottom of the stack

#include <iostream>
#include <stack>
using namespace std;

class Solution{
public:
    void reverseStack(stack<int> &St)
    {
        int n = St.size();
        
        int A[n] = {0};
        
        for(int i = 0; i < n; i++)
        {
            A[i] = St.top();
            St.pop();
        }
        
        for (int i = 0; i < n; i++)
        {
            St.push(A[i]);
        }
    }
    
    stack<int> insertAtBottom(stack<int> St,int X){
        //* Method 1

        /*
        reverseStack(St);
        St.push(X);
        reverseStack(St);

        return St;
        */
        
        //* Method 2
        
        stack<int> temp;
        
        while(!St.empty())
        {
            temp.push(St.top());
            St.pop();
        }
        
        St.push(X);
        
        while(!temp.empty())
        {
            St.push(temp.top());
            temp.pop();
        }
        
        return St;
    }
};

// Displaying Stack
void displayStack(stack<int> St)
{
    cout << "Stack: ";

    stack<int> temp;

    // Reverse a stack
    while(!St.empty())
    {
        temp.push(St.top());
        St.pop();
    }

    // Printing stack
    while(!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;
}

int main()
{
    stack<int> St;

    St.push(2);
    St.push(3);
    St.push(4);
    St.push(5);
    St.push(6);

    displayStack(St);

    St = Solution().insertAtBottom(St, 5);

    displayStack(St);
}