#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
    public:
    //Function to calculate the span of stock's price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        // Your code here
        stack<int> st;
        vector<int> ans(n, 1);
       
        for(int i = n - 1; i >= 0; i--)
        {
            while(!st.empty() && price[i] > price[st.top()])
            {
                ans[st.top()] = st.top() - i;
                st.pop();   
            }
               
            st.push(i); 
        }
        
        while(!st.empty())
        {
            ans[st.top()] = st.top() + 1;
            st.pop();
        }
        
        return ans;
    }
};

int main()
{
    int price[] = {30, 40, 55, 70, 60, 75, 85};

    vector<int> answer = Solution().calculateSpan(price, sizeof(price) / sizeof(int));

    cout << "Stock Span: ";
    for(int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
}
