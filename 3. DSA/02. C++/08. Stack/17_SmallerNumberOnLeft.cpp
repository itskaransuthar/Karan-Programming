#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> leftSmaller(int n, int arr[]){
        // code here
        vector<int> ans(n, -1);
        stack<int> st;
        
        for (int i = n - 1; i >= 0; i--)
        {
            while(!st.empty() && arr[i] < arr[st.top()])
            {
                ans[st.top()] = arr[i];
                st.pop();
            }
            
            st.push(i);
        }
        
        return ans;
    }
};

int main()
{
    int arr[7] = {100, 80, 55, 70, 60, 75, 85};

    vector<int> answer = Solution().leftSmaller(7, arr);

    cout << "The smaller element of the array on left is: ";
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
}