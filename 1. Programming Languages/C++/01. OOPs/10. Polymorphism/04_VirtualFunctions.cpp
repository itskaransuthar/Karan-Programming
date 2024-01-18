#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak()
    {
        cout << "Hu Hu" << endl;
    }
};

class Dog: public Animal
{
public: 
    void speak()
    {
        cout << "Bark" << endl;
    }

    void roti()
    {
        cout << "Roti Khani Hain" << endl;
    }
};

int main()
{
    Animal A;
    Dog D;

    A.speak();
    D.speak();

    /*
    Hu Hu
    Bark
    */

    Animal *A1;
    A1 = new Dog;
    A1->speak();
    // A1->roti(); //! Error: Animal has no member function roti()

    /*
    Bark
    */
}