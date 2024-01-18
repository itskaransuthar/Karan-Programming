#include <iostream>
using namespace std;

int main()
{
    bool a = true;
    bool b = false;

    cout << a << endl;      // 1
    cout << b << endl;      // 1
    cout << a + b << endl;  // 1

    // bool c = 0;
    bool c = 6; 
    bool d = 8;

    cout << c << endl;      // 1
    cout << d << endl;      // 1
    cout << c + d << endl;  // 2

    bool e = "Karan";       // 1
    bool f = "";            // 1
    // Empty string in C++ treated as true(1)
    
    cout << e << endl;      // 1
    cout << f << endl;      // 1
    cout << e + f << endl;  // 2

    // bool g = ''; => Error: empty character constant
    bool h = ' ';           

    cout << h << endl;      // 1
}