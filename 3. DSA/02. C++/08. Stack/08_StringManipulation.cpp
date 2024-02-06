#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution{
    public:
    int removeConsecutiveSame(vector<string > v) 
    {
        // Your code goes here
        int n = v.size();
        stack<string> st;
        
        int i = 0; 
        while(i < n)
        {
            if(st.empty())
                st.push(v[i]);
            
            else
            {
                if(st.top() == v[i])
                    st.pop();
                else
                    st.push(v[i]);
            }
            
            i++;
        }
        
        return st.size();
    }
};

int main()
{
    vector<string> arr = {"ab", "ac", "da", "da", "ac", "db", "ea"};

    Solution obj;
    int ans = obj.removeConsecutiveSame(arr);

    cout << "Number of consecutive same elements: " << ans << endl;
}