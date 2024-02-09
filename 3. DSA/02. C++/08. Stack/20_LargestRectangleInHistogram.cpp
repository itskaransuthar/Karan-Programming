#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        stack <int> st;
        int n = heights.size();
    
        int answer = 0;

        for (int i = 0; i < n; i++)
        {
            while(!st.empty() and heights[i] < heights[st.top()])
            {
                int temp = st.top();
                st.pop();

                if(!st.empty())
                    answer = max(answer, (i - st.top() - 1) * heights[temp]);
                else
                    answer = max(answer, i * heights[temp]);
                    // i - (-1) - 1 => i
            }

            st.push(i);
        }

        while(!st.empty())
        {
            int temp = st.top();
            st.pop();

            if(!st.empty())
                answer = max(answer, (n - st.top() - 1) * heights[temp]);
            else
                answer = max(answer, n * heights[temp]);
                // n - (-1) - 1 => n
        }

        return answer;
    }

    /*
    vector<int> rightSmallerElement(vector<int> arr)
    {
        stack<int> st;
        vector<int> ans(arr.size(), -1);

        for (int i = 0; i < ans.size(); i++)
        {
            while(!st.empty() and arr[i] < arr[st.top()])
            {
                ans[st.top()] = i;
                st.pop();
            }

            st.push(i);
        }

        while(!st.empty())
        {
            ans[st.top()] = arr.size();
            st.pop();
        }

        return ans;
    }

    vector<int> leftSmallerElement(vector<int> arr)
    {
        stack<int> st;
        vector<int> ans(arr.size(), -1);

        for (int i = arr.size() - 1; i >= 0; i--)
        {
            while(!st.empty() and arr[i] < arr[st.top()])
            {
                ans[st.top()] = i;
                st.pop();
            }

            st.push(i);
        }

        return ans;
    }

    int largestRectangleArea(vector<int>& heights) 
    {
        vector<int> right = rightSmallerElement(heights);
        vector<int> left = leftSmallerElement(heights);

        int answer = 0;

        for (int i = 0; i < heights.size(); i++)
        {
            int temp = (right[i] - left[i] - 1) * heights[i];

            answer = max(answer, temp);
        }

        return answer;
    }
    */
};