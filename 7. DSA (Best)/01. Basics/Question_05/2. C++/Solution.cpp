// Print natural numbers from 1 to 100 but difference is 3

#include <iostream>
using namespace std;

int main()
{
    cout << "\nNatural numbers from 1 to 100 but difference is 3: ";

    for (int i = 1; i <= 100; i += 3)
    {
        cout << i << " ";
    }

    cout << endl;
}