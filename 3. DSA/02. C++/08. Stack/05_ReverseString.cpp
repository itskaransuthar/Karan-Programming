#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();

        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            st.push(s[i]);
        }

        int i = 0;
        while(!st.empty())
        {
            s[i] = st.top();
            st.pop();
            i++;
        }
    }
};

void displayVector(vector<char> v)
{
    cout << "[";
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << "\"" << v[i] << "\", ";
    }
    cout << "\"" << v[v.size() - 1] << "\"]" << endl;
}

int main()
{
    Solution sol;

    vector<char> str;
    str.push_back('K');
    str.push_back('a');
    str.push_back('r');
    str.push_back('a');
    str.push_back('n');

    cout << "Original String: ";
    displayVector(str);

    sol.reverseString(str);

    cout << "Reversed String: ";
    displayVector(str);
}