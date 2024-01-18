// Print Fibonacci Series

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;

    int fValue = 0, sValue = 1, tValue;
    // fValue = firstValue, sValue = secondValue, tValue = thirdValue

    if(num == 1)
    {
        cout << endl << fValue;
        return 0;
    }

    cout << endl << fValue << " " << sValue << " ";
    for(int i = 3; i <= num; i++)
    {
        tValue = fValue + sValue;
        fValue = sValue;
        sValue = tValue;

        cout << tValue << " ";
    }

    cout << endl;
}