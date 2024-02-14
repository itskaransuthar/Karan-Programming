//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    stack<int> minStack;
    
    public:
        /*returns min element from stack*/
        int getMin()
        {
            //Write your code here
            if(minStack.empty())
                return -1;
            else
                return minStack.top();
        }
       
        /*returns poped element from stack*/
        int pop()
        {
            //Write your code here
            if(minStack.empty())
                return -1;
            else
            {
                int popped = -1;
                
                popped = s.top();
                
                // Popping
                minStack.pop();
                s.pop();
                
                return popped;
            }
        }
       
        /*push element x into the stack*/
        void push(int x)
        {
            //Write your code here
            if(s.empty())    
            {
                s.push(x);
                minStack.push(x);
            }
            
            else
            {
                s.push(x);
                minStack.push(min(minStack.top(), x));
            }
        }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends