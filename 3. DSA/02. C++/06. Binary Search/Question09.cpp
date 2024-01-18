// Cube root of a number

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int cubeRoot(int N) {
        // code here
        if(N == 0 || N == 1)
            return N;
            
        int low = 0, high = N;
        
        while(low <= high)
        {
            int mid = (high - low) / 2 + low;
            
            if(mid == N / mid / mid)
                return mid;
            
            else if(mid < N / mid / mid)
                low = mid + 1;
                
            else 
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

    int answer = obj.cubeRoot(n);
    cout << "\nSquare root of number " << n << " = " << answer;    
}