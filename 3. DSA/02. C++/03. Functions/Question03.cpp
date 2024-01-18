// Reverse Integer

#include <bits/stdc++.h>
using namespace std;

class Solution 
{
private:
    int result = 0;
    
public:
    int reverse(int x) 
    {
        while(x)
        {
            // Boundary Conditions must be checked to prevent overflow
            if(result > INT_MAX / 10 || result < INT_MIN / 10)
                return 0;

            result = result * 10 + x % 10;
            x /= 10;
        }

        return result;
    }
}obj;

int main() 
{
    int num;
    cout << "Enter num: ";
    cin >> num;

    int answer = obj.reverse(num);
    
    if(answer)
        cout << "\nReverse of number " << num << " is " << answer;
    else 
        cout << "\nInvalid Number";
}