#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        /*
        // BRUTE FORCE
        int answer = -1, i, j;
        
        for(i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if(i ==j)
                    continue;
                
                else
                {
                    if(M[i][j] == 1)
                        break;
                        
                    if(M[j][i] == 0)
                        break;
                }
            }
            
            if(j == n)
                answer = i;
        }
        
        return answer;
        */
        
        // code here
        // Optimized Method
        stack <int> st;
        
        for (int i = n - 1; i >= 0; i--)
        {
            st.push(i);
        }
        
        while(st.size() > 1)
        {
            int Person1 = st.top(); st.pop();
            int Person2 = st.top(); st.pop();
            
            /*
            //* Person1 knows Person2 and vice versa
            if(M[Person1][Person2] && M[Person2][Person1])
            {
                continue;
            }
            
            //* Person1 doesn't know Person2 and vice versa
            else if(!M[Person1][Person2] && !M[Person2][Person1])
            {
                continue;
            }
            */
            
            //* Person1 knows Person2 but vice versa is false
            if(M[Person1][Person2] && !M[Person2][Person1])
            {
                st.push(Person2);
            }
            
            //* Person2 knows Person1 but vice versa is false
            else if(!M[Person1][Person2] && M[Person2][Person1])
            {
                st.push(Person1);
            }
        }
        
        if(st.empty())
            return -1;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if(M[st.top()][i])
                {
                    return -1;
                }
                
                if(i != st.top() and !M[i][st.top()])
                {
                    return -1;
                }
            }
            
            return st.top();
        }
    }
};