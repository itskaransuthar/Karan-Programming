/*
? Constructor
A constructor is a special member function used to initialize objects of its class. It will be called automatically when the object is created. 

? Default constructor
-> It is possible that some constructors might not have any arguments at all. Such types of constructors are called default constructors. In the scenarios where no user-defined constructor exists for a class and one is needed, the compiler makes an implicit declaration of an inline default constructor that does not have any parameters. 

!Note: Every default constructor can be treated as zero argument constructor, but every zero argument constructor cannot be called a default constructor.

? Parameterized constructor
-> The constructor that takes arguments or parameters at the time of object creation is known as parameterized constructor. 

? Constructor overloading:
When a class contains more than one constructor, it is known as constructor overloading. The constructors are identical in names, so they are distinguished from each other on the basis of the number of arguments and type of arguments in their parameters. 

!Note: Constructor overloading in C++ represents the polymorphism feature of OOP.

? Copy constructors
-> Copy constructors are the member functions of a class that initialize the data members of the class using another object of the same class. It copies the values of the data variables of one object of a class to the data members of another object of the same class. 

* A copy constructor in C++ is further categorized into two types:
    > Default Copy Constructor
    > User-defined Copy Constructor

Default Copy Constructors:
-> When a copy constructor is not defined, the C++ compiler automatically supplies with its self-generated constructor that copies the values of the object to the new object.

User-defined Copy Constructors: 
-> In case of a user-defined copy constructor, the values of the parameterized object of a class are copied to the member variables of the newly created class object. The initialization or copying of the values to the member variables is done as per the definition of the copy constructor.
*/

//* Default Copy Constructor

#include <iostream>
using namespace std;

class Student
{
    public:

    int age;
    int rollNumber;
};

int main(){
    Student s1;
    s1.age = 10;
    s1.rollNumber = 20;

    Student s2(s1);

    cout << s2.age << endl;  //* 10
    cout << s2.rollNumber;   //* 20
}