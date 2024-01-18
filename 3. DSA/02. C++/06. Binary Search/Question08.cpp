// Sqrt(x)

#include <bits/stdc++.h>
using namespace std;

class Solution 
{
private:
    int low, high;

public:
    /*
    /// Linear Search
    int mySqrt(int x) 
    {
        int result = 1;

        while(result <= x / result)
        {
            result++;
        }

        return result - 1;
    }
    */

    // Binary Search
    int mySqrt(int x)
    {
        if(x == 0 || x == 1)
            return x;
        
        low = 1, high = x;
        
        while(low <= high)
        {
            // To prevent overflow
            int mid = (high - low) / 2 + low;

            if (mid == x / mid)
                return mid;

            else if(mid < x / mid)
                low = mid + 1;
            
            else // mid > x / mid
                high = mid - 1;
        }

        return low - 1;
    }
}obj;

int main()
{
    int n; 
    cout << "Enter n: ";
    cin >> n;

    int answer = obj.mySqrt(n);
    cout << "\nSquare root of number " << n << " = " << answer;
}