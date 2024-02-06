#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    stack<char> requiredStack(string str)
    {
        stack<char> st;
        int n = str.length();

        int i = 0;
        while(i < n)
        {
            if(str[i] == '#')
            {
                if(!st.empty())
                    st.pop();
            }

            else 
                st.push(str[i]);

            i++;
        }

        return st;
    }

    bool backspaceCompare(string s, string t) 
    {
        stack<char> S = requiredStack(s);
        stack<char> T = requiredStack(t);

        return S == T;

        /*
        while(!S.empty() and !T.empty())
        {
            if(S.top() != T.top())
                return false;

            S.pop();
            T.pop();
        }

        if(!S.empty() or !T.empty())
            return false;
        return true;
        */
    }
};

int main()
{
    Solution obj;

    if(obj.backspaceCompare("ab#c", "ad#c"))
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";
}