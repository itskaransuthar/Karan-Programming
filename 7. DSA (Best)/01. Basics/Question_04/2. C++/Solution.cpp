// Print alphabets from 'z' to 'a'

#include <iostream>
using namespace std;

int main()
{
    cout << "\nPrinting Alphabets: ";

    for (char ch = 'z'; ch >= 'a'; ch--)
    {
        cout << ch << " ";
    }

    cout << endl;
}