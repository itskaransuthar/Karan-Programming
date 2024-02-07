#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        // code here
        stack<int> st;
        vector<int> ans(N, -1);
        
        for (int i = 0; i < 2 * N; i++)
        {
            while(!st.empty() and arr[i % N] > arr[st.top()])
            {
                ans[st.top()] = arr[i % N];
                st.pop();
            }
            
            st.push(i % N);
        }
        
        return ans;
    }
};

int main()
{
    vector<int> arr = {100, 80, 55, 70, 60, 75, 85};

    vector<int> answer = Solution().nextGreaterElement(7, arr);

    cout << "The greatest element of the array is: ";
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
}