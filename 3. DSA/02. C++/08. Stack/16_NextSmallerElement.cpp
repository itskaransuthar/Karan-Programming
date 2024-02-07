#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while(!st.empty() and arr[i] < arr[st.top()])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }

        st.push(i);
    }

    return ans;
}

int main()
{
    vector <int> arr = { 1, 2, 1 };
    vector <int> answer = nextSmallerElement(arr, arr.size());

    cout << "The next smaller element of the array is: ";
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
}