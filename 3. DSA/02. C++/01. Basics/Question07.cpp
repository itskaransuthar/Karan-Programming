// Sum of first 'n' natural numbers 

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
        sum += i;
    }

    // int sum = num * (num + 1) / 2;

    cout << "\nThe sum of first " << num << " natural numbers is " << sum << endl;
}