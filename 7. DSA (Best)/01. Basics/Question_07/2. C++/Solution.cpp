// Calculate power of a positive integer

#include <iostream>
using namespace std;

int main()
{
    int num, p, ans;

    cout << "\nEnter a number: ";
    cin >> num;

    cout << "Enter a power: ";
    cin >> p;

    ans = num;
    for (int i = 0; i < p - 1; i++)
    {
        ans *= num;
    }

    cout << "\n" << num << "^" << p << " = " << ans << endl;
}