// Check whether a given number is prime or not

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num <= 1)
    {
        cout << endl << num << " is not a prime number";
        return 0;
    }

    bool isPrime = true;
    for(int i = 2; i <= num - 1; i++)
    {
        if(num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    /*
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    */

    if(isPrime)
        cout << "\n" << num << " is a prime number" << endl;
    else
        cout << "\n" << num << " is not a prime number" << endl;

    return 0;
}