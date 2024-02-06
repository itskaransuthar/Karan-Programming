#include <iostream>
#include <stack>
using namespace std;

stack<int> _push(int *, int);
void _getMinAtPop(stack<int>);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);

    stack<int> st = _push(arr, n);
    _getMinAtPop(st);
}

//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
    // your code here
    stack<int> st;
    if(n != 0) st.push(arr[0]);
   
    for (int i = 1; i < n; i++)
        st.push(min(st.top(), arr[i]));
   
    return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}