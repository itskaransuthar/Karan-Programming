#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    /*
    if(b == 0)
    {
        cout << "Zero Division Error" << endl;
    }
    else 
    {
        c = a / b;
        cout << "c = " << c << endl;
    }
    */

    try {        
        if(b == 0)
            throw "Zero Division Error";

        c = a / b;
        cout << "c = " << c << endl;
    } catch(const char *e)
    {
        cout << "Exception Occurred: " << e << endl;
    }
}