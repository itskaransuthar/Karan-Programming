// Print nth term of Fibonacci Series

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int fValue = 0, sValue = 1, tValue;
    // fValue = firstValue, sValue = secondValue, tValue = thirdValue

    if(n == 1)
    {
        cout << "\nFirst term of Fibonacci Series is " << 0 << endl;
        return 0;
    }

    if(n == 2)
    {
        cout << "\nSecond term of Fibonacci Series is " << 1 << endl;
        return 1;
    }

    for(int i = 3; i <= n; i++)
    {
        tValue = fValue + sValue;
        fValue = sValue;
        sValue = tValue;
    }

    cout << endl << n << "th term of Fibonacci Series is " << tValue << endl;
    return 0;
}