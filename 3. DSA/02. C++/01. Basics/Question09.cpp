// Sum of cube of first 'n' natural numbers

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;
    for(int i = 1; i <= num; i++)
    {
        sum += i * i * i;
    }

    // int sum = (num * (num + 1) / 2) * (num * (num + 1) / 2);

    cout << "\nThe sum of cube of first " << num << " natural numbers is " << sum << endl;
}