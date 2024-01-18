#include <iostream>
using namespace std;

class Animal {
public:
    void speak()
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

    /*
    Hu Hu
    */
}