/*
Inheritance:
-> The capability of a class to derive property and characteristics from another class.

                Within Class        Derived Class       External Code
public:             ✅                   ✅                  ✅
protected:          ✅                   ✅                  ❌
private:            ✅                   ❌                  ❌
*/

#include <iostream>
using namespace std;

class Human 
{
    //? Base Class Member Access Specifier
    public:
        int a;
    
    protected:
        int b;
        void fun()
        {
            a = 15;
            b = 25;
            c = 35;
        }
    
    private:
        int c;

    public:
        // void fun()
        // {
        //     a = 15;
        //     b = 25;
        //     c = 35;
        // }

        void display()
        {
            fun();
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
            cout << "c = " << c << endl;
        }
};

//! Private > Protected > Public (Strictness)

/* 
*  Base Class       Type of        Result
* member access   Inheritance  
*   specifier
* ---------------------------------------------------------
* public           public           public
* public           protected        protected
* public           private          private

* protected        public           protected
* protected        protected        protected
* protected        private          private

* private          public           Not Accessible (Hidden)
* private          protected        Not Accessible (Hidden)
* private          private          Not Accessible (Hidden)
*/

//?               -------> Type of Inheritance
//?               |
//?               |
class Student: public Human {
    /*
    a is public
    b is protected
    c can't be accessed
    */
};

class Student: protected Human {
    /*
    a is protected
    b is protected
    c can't be accessed
    */
};

class Student: private Human {
    /*
    a is private
    b is private
    c can't be accessed
    */
};

int main()
{
    Human Karan;
    Karan.a = 10;
    cout << Karan.a << endl; 

    // Karan.fun(); //! Error: function fun() is in protected scope
    // Karan.fun(); //* No Error: if function fun() is in public scope
    Karan.display();
}