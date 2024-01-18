#include <iostream>
using namespace std;

int main()
{
    cout << 10 % 3 << endl;                 // 1
    cout << 10 - (10 / 3) * 3 << endl;      // 1

    cout << 10 % -3 << endl;                // 1
    cout << 10 - (10 / -3) * -3 << endl;    // 1

    cout << -10 % 3 << endl;                // -1
    cout << -10 - (-10 / 3) * 3 << endl;    // -1

    cout << -10 % -3 << endl;               // -1
    cout << -10 - (-10 / -3) * -3 << endl;  // -1
}