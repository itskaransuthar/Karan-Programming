// Reverse a string using recursion

#include <iostream>
using namespace std;

string reverseString(string str, int start, int end)
{
    // Base Condition
    if(start >= end)
        return str;

    // Recursion
    swap(str[start], str[end]);
    return reverseString(str, start + 1, end - 1);
}

int main()
{
    string str = "Karan";

    cout << "Reverse of string " << str << " = " << reverseString(str, 0, str.length() - 1) << endl;
}