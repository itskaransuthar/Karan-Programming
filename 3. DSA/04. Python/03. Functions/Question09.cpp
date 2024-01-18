// Trailing Zeros

#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    int trailingZeroes(int N)
    {
        // Write Your Code here
        int result = 0;
        
        while(N)
        {
            N /= 5;
            result += N;
        }
        
        return result;
    }
};

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    Solution obj;
    int answer = obj.trailingZeroes(N);

    cout << "\nNumber of trailing zeroes in " << N << "! is " << answer;

    return 0;
}