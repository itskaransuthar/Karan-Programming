#include <iostream>
using namespace std;

class Complex {
    int real, img;

public:
    Complex()
    {

    }

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    };

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }

    Complex operator +(Complex &c)
    {
        Complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;

        return ans;
    }
};

int main()
{
    int a = 5, b = 10;
    cout << a + b << endl;
    //* Here + is adding two integers
 
    string str1 = "Karan";
    string str2 = " Suthar";
    cout << str1 +  str2 << endl;
    //* Here + is concatenating two strings
 
    //? So, + is having multiple forms (two forms), how? => Operator Overloading

    /*
    15
    Karan Suthar
    */

    Complex c1(4, 7);
    Complex c2(3, 3);
    c1.display();
    c2.display();

    /*
    4 + 7i
    3 + 3i
    */

    Complex c3 = c1 + c2;
    c3.display();
} 