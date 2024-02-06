#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

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

    cout << "The topmost element of stack: " << st.top() << endl;
    cout << "The size of stack: " << st.size() << endl;
}

/*
! Note: Internal implementation of stack is done using deque
*/