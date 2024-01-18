/*
? Destructor:
-> Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.

1. A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor. 
2. Destructor has the same name as their class name preceded by a tilde (~) symbol.
3. It is not possible to define more than one destructor. 
4. The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded.
5. Destructor neither requires any argument nor returns any value.
6. It is automatically called when an object goes out of scope. 
7. Destructor release memory space occupied by the objects created by the constructor.
8. In destructor, objects are destroyed in the reverse of an object creation.

-> The thing is to be noted here if the object is created by using new or the constructor uses new to allocate memory that resides in the heap memory or the free store, the destructor should use delete to free the memory. 

? Syntax 
1. The syntax for defining the destructor within the class:

~ <class-name>() {
    /// some instructions
}

2. The syntax for defining the destructor outside the class:

<class-name> :: ~<class-name>() {
    /// some instructions
}
*/

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

public:

    //? Constructor
    Customer()
    {
        cout << "Constructor is Called" << endl;
        name = "Karan";
        data = new int;
        *data = 10;
    }

    //? Destructor
    ~Customer()
    {
        cout << "Destructor is Called" << endl;
    }
};

int main()
{
    Customer obj;
}