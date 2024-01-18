// Print natural numbers from 1 to 100 but difference is 3

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i += 3)
    {
        printf("%d ", i);
        // cout << i << " ";
    }

    cout << endl;
}