// Palindrome Number

#include <iostream>
#include <climits>
using namespace std;

class Solution 
{
public:
    int getReverse(int x)
    {
        int rev = 0;
        
        while(x)
        {
            if(rev > INT_MAX / 10)
                return 0;

            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }

    bool isPalindrome(int x) 
    {
        if(x < 0 ||  x != 0 && x % 10 == 0)
            return false;

        int reverse = getReverse(x);
        
        if(reverse == x)
            return true;
        else 
            return false;
    }
};

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    Solution obj;

    if(obj.isPalindrome(num))
        cout << "\nNumber " << num << " is a palindrome number";
    else
        cout << "\nNumber " << num << " is not a palindrome number";
}