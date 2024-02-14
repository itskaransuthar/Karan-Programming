#include <iostream>
using namespace std;

string lowToUpp(string str, int index)
{
    // Base Condition
    if(index == str.length())
        return str;

    // Recursion
    if('a' <= str[index] && str[index] <= 'z')
    {
        str[index] = str[index] - 32;
    }

    return lowToUpp(str, index + 1);
}

int main()
{
    string str = "KarAn";

    cout << "Updated String: " << lowToUpp(str, 0) << endl;
}