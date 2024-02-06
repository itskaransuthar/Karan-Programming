#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution{
public:	
	vector<int> bracketNumbers(string S)
	{
	    // Your code goes here
	    stack<int> st;
	    vector<int> ans;
	    int count = 0, i = 0;
	    
	    while(i < S.size())
	    {
	        // Opening Bracket
	        if(S[i] == '(')
	        {
	            count++;
	            st.push(count);
	            ans.push_back(count);
	        }
	        
	        // Closing Bracket
	        else if(S[i] == ')')
	        {
	            ans.push_back(st.top());
	            st.pop();
	        }
	        
	        i++;
	    }
	    
	    return ans;
	}
};

int main()
{
    string str = "(karan(bhavika(suthar)anshu)f)garg";

    Solution obj;
    vector<int> ans = obj.bracketNumbers(str);

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}