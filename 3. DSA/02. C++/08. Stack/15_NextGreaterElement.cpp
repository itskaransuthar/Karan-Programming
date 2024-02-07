#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n)
    {
        // Your code here
        /*  BRUTE FORCE 
        vector<long long> ans(n, -1);
        
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if(arr[j] > arr[i])
                {
                    ans[i] = arr[j];
                    break;
                }
            }
        }
        
        return ans;
        */
        
        // OPTIMIZED METHOD 1
        stack<int> st;
        vector<long long> ans(n, -1);
        
        for (int i = 0; i < n; i++)
        {
            while(!st.empty() and arr[st.top()] < arr[i])
            {
                ans[st.top()] = arr[i];
                st.pop();
            }
            
            st.push(i);
        }
        
        return ans;
        
        // OPTIMIZED METHOD 2
        /*
        stack <int> st;
        vector <long long> ans (n, -1);
        
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && arr[st.top()] < arr[i])
            {
                st.pop();
            }
            
            if(!st.empty())
                ans[i] = arr[st.top()];
                
            st.push(i);
        }
        
        return ans;
        */
    }
};

int main()
{
    vector<long long> arr = {1, 2, 3, 4, 5};
    vector<long long> answer = Solution().nextLargerElement(arr, arr.size());

    cout << "The next greater elements: ";
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
}