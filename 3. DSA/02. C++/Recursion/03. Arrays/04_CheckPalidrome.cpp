#include <iostream>
using namespace std;

bool checkPalindrome(string str, int start, int end)
{
    // Base Condition
    if(start >= end)
        return true;
    
    if(str[start] != str[end])
        return false;

    // Recursion
    return checkPalindrome(str, start + 1, end - 1);
}

int main()
{
    string str = "karak";

    cout << checkPalindrome(str, 0, str.length() - 1) << endl;
}