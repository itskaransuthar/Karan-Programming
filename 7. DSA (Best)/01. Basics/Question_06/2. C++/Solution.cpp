// Multiplication table making (Take input from user)

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "\nEnter a number: ";
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}