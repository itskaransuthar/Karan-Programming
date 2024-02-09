#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int> height)
    {
        stack<int> st;
        int answer = 0, n = height.size();

        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && height[i] < height[st.top()])
            {
                int temp = st.top();
                st.pop();

                if(!st.empty())
                {
                    answer = max(answer, (i - st.top() - 1) * height[temp]);
                }
                else
                {
                    answer = max(answer, i * height[temp]);
                }
            }

            st.push(i);
        }

        while(!st.empty())
        {
            int temp = st.top();
            st.pop();

            if(!st.empty())
            {
                answer = max(answer, (n - st.top() - 1) * height[temp]);
            }
            else
            {
                answer = max(answer, (n * height[temp]));
            }
        }

        return answer;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> height(matrix[0].size(), 0);

        int maxArea = 0;

        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                if(matrix[i][j] == '1')
                    height[j] += 1;
                else
                    height[j] = 0;
            }

            maxArea = max(maxArea, largestRectangleArea(height));
        }

        return maxArea;
    }
};