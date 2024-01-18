// Nim Game

#include <iostream>
using namespace std;

class Solution 
{
public:
    bool canWinNim(int n) 
    {
        if(n % 4 != 0)
            return true;
        else 
            return false;
    }
};

/*
class Solution {
public:
    bool canWinNim(int n) {
        return (n % 4);
    }
};
*/

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    Solution obj;

    if(obj.canWinNim(n))
        cout << "\nI won";
    else
        cout << "\nI lost";
}