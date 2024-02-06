#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int> st;
        
        int i = 0;
        while(i < arr.size())
        {
            if(st.empty())
                st.push(arr[i]);

            else 
            {
                if(st.top() >= 0 && arr[i] < 0 or st.top() < 0 && arr[i] >= 0)
                    st.pop();
                else
                    st.push(arr[i]);
            }
            
            i++;
        }
        
        int n = st.size();
        
        vector<int> ans(n);
        
        for (int i = n - 1; i >= 0; i--)
        {
            ans[i] = st.top();
            st.pop();
        }
        
        return ans;
    }
};

int main()
{
    
}