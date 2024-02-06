#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        int i = 0;
        while(i < s.size())
        {
            // Opening Bracket
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            
            // Closing Bracket
            else
            {
                if(st.empty())
                    return false;
                else if(st.top() == '(' && s[i] != ')' || st.top() == '{' && s[i] != '}' || st.top() == '[' && s[i] != ']')
                    return false;
                else
                    st.pop();
            }

            i++;
        } 

        return st.empty();

        /*
        if(st.empty())
            return true;
        else    
            return false;
        */
    }
};

int main()
{
    Solution obj;
    string str = "(){}[]";

    bool ans = obj.isValid(str);

    if(ans)
        cout << "Valid Parenthesis";
    else
        cout << "Invalid Parenthesis";
}