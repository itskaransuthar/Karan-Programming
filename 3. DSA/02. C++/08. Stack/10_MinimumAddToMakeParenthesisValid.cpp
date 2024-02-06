#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;

        int i = 0;
        while(i < s.length())
        {
            if(st.empty())
                st.push(s[i]);
            else if(st.top() == '(' && s[i] == ')')
                st.pop();
            else
                st.push(s[i]);

            i++;
        }   

        return st.size();
    }
};

int main()
{
    Solution obj;
    string s = "())";

    cout << "Minimum number of characters to be added: " << obj.minAddToMakeValid(s);
}