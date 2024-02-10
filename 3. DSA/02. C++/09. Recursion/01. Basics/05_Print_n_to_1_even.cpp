// Print n to 1 even numbers using recursion

#include <iostream>
using namespace std;

void printEven(int n)
{
    // Base Condition
    if(n == 0)
    {
        cout << endl;
        return;
    }

    // Recursion
    if(n % 2 == 0)
    {
        cout << n << " ";
        return printEven(n - 2);
    }
    else
    {
        cout << n - 1 << " ";
        return printEven(n - 3);
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Printing even numbers: ";
    printEven(n);
}