// Multiplication table making (Take input from user)

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "\nMultiplication Table of " << num << endl;
    cout << "--------------------------" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    /*
    for(int i = num; i <= 10 * num; i += num)
    {
        cout << num << " x " << i / 6 << " = " << i << endl;
    }
    */

    return 0;
}