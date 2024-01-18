// Calculate power of a positive integer

#include <iostream>
using namespace std;

int main()
{
    int num, power;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a power: ";
    cin >> power;

    int product = num;
    for(int i = 1; i < power; i++)
    {
        product *= num;
    }

    /*
    int product = 1;
    for(int i = 1; i <= power; i++)
    {
        product *= num;
    }
    */

    if(power == 0)
        product = 1;

    cout << "\nThe answer of " << num << "^" << power << " is " << product << endl;
}