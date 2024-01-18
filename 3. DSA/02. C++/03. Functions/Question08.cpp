// Armstrong Number

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getDigit(int n)
    {
        int count = 0;
        
        while(n)
        {
            count++;
            n /= 10;
        }
        
        return count;
    }
    
    int getPower(int n, int power)
    {
        int product = n;
        
        for(int i = 1; i < power; i++)
        {
            product = product * n;
        }
        
        return product;
    }
    
    string armstrongNumber(int n){
        // code here
        int digit = getDigit(n), rem, result = 0;
        
        int m = n;
        
        while(n)
        {
            rem = n % 10;
            result += getPower(rem, digit);
            n /= 10;
        }
        
        if(result == m)
            return "Yes";
        else 
            return "No";
    }
};

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    Solution obj;
    string answer = obj.armstrongNumber(n);

    if(answer == "Yes")
        cout << "\nGiven number " << n << " is an armstrong number";
    else 
        cout << "\nGiven number " << n << " is not an armstrong number";
}