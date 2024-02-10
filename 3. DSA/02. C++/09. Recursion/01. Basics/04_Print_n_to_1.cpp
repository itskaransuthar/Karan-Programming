// Print numbers from n to 1 using recursion

#include <iostream>
using namespace std;

void print(int n)
{
    // Base Case
    if(n == 0)
    {
        cout << endl;
        return;
    }

    // Recursion
    cout << n << " ";
    print(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Printing numbers: ";
    print(n);
}