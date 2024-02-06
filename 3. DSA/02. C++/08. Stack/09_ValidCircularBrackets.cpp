#include <iostream>
#include <stack>
using namespace std;

class Solution{
    public:
    //* Method 1
    bool validCircularBrackets(string str) 
    {
        // Your code goes here
        int n = str.size();
        stack<char> st;
        
        int i = 0; 
        while(i < n)
        {
            // Opening Bracket
            if(str[i] == '(')
                st.push(str[i]);
            
            // Closing Bracket
            else
            {
                if(st.empty())
                    return false;
                else
                    st.pop();
            }
            
            i++;
        }

        return true;
    }

    //* Method 2
    bool validCircularBracketsAlternate(string str) 
    {
        // Your code goes here
        int n = str.size(), count = 0;
        
        int i = 0; 
        while(i < n)
        {
            // Opening Bracket
            if(str[i] == '(')
                count++;
            
            // Closing Bracket
            else
            {
                if(count == 0)
                    return false;
                else
                    count--;
            }
            
            i++;
        }

        if(count == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    string str = "()(())()()";

    Solution obj;
    bool ans = obj.validCircularBracketsAlternate(str);

    if(ans)
        cout << "Valid" << endl;
    else    
        cout << "Invalid" << endl;
}