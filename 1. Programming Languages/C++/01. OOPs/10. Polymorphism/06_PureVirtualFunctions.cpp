/*
-> Pure Virtual Functions are also known as abstract class

-> A pure virtual function is a virtual function that the base class declares but does not define. The base class makes a declaration, and then derived classes MUST override the virtual function.
*/

#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    //? Pure Virtual Function
    virtual void speak() = 0;

    //? Virtual Function with default implementation
    virtual void drink()
    {
        cout << "Water" << endl;
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

class Cat: public Animal
{
public:
    void speak()
    {
        cout << "Meow" << endl;
    }

    void drink()
    {
        cout << "Milk" << endl;
    }
};

int main()
{
    // Animal A; //! Error: Because we can't make object of a class having pure virtual function(s)

    /*
    Hu Hu
    Bark
    */

    Animal *A1; 
    A1 = new Dog(); // (Both are Same)
    A1->speak();

    /*
    Bark
    */

    Cat C;
    C.drink();
    C.speak();

    Dog D;
    D.drink();
    D.speak();

    /*
    Milk
    Meow
    Water
    Bark
    */

    vector<Animal *> animals;
    animals.push_back(new Dog);
    animals.push_back(new Cat());
    // animals.push_back(new Animal);
    animals.push_back(new Cat);
    animals.push_back(new Dog());

    for(int i = 0; i < animals.size(); i++)
    {
        A1 = animals[i];
        A1->speak();
    }

    /* 
    Hu Hu
    Hu Hu
    Hu Hu
    Hu Hu
    Hu Hu
    */
}

/*
MUST READ   

-> In C++, you can define both virtual functions and pure virtual functions in the same class. In the code you provided, speak() is a pure virtual function (denoted by the = 0), and drink() is a virtual function with a default implementation.

A pure virtual function is a function that has no implementation in the base class and must be implemented by any derived class. On the other hand, a virtual function with an implementation in the base class can be overridden by derived classes, but it also provides a default behavior.

-> In C++, a class that contains one or more pure virtual functions is considered an abstract class. An abstract class cannot be instantiated directly; it can only be used as a base class for other classes. This is because an abstract class may have incomplete or undefined behavior for its pure virtual functions, and it relies on derived classes to provide concrete implementations for those functions.

In your case, the Animal class has a pure virtual function speak(), making it an abstract class. You cannot create an object of the Animal class directly. Instead, you should create objects of classes that inherit from Animal and provide implementations for the pure virtual function(s).
*/