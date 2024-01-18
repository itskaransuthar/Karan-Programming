//* In C++, an abstract class is a class that has at least one pure virtual function. You can declare a pure virtual function by appending = 0 to its declaration. Here's an example:

#include <iostream>

class Animal {
public:
    // Pure virtual function
    virtual void speak() = 0;

    // Regular member function
    void eat()
    {
        std::cout << "Animal is eating" << std::endl;
    }

    // Virtual function with default implementation
    virtual void drink()
    {
        std::cout << "Animal is drinking water" << std::endl;
    }
};

// Concrete class derived from Animal
class Dog : public Animal {
public:
    // Implementation of pure virtual function
    void speak() override
    {
        std::cout << "Dog says Woof!" << std::endl;
    }
};

int main() {
    // Error: Cannot create an object of the abstract class Animal
    // Animal animal;

    // Create an object of the derived class (Dog)
    Dog dog;
    dog.speak();
    dog.eat();
    dog.drink();

    /*
    Dog says Woof!
    Animal is eating
    Animal is drinking water
    */

    return 0;
}
