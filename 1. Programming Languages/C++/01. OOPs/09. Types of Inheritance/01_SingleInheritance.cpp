/*
        HUMAN
          /\
          ||
          ||
        STUDENT
*/

#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human()
    {
        cout << "I am a constructor of parent class, human" << endl;
    }

    void work()
    {
        cout << "I am working" << endl;
    }

    ~Human()
    {
        cout << "I am a destructor of parent class, human" << endl;
    }
};

class Student: public Human
{
    int rollNumber, fees;

public:
    Student()
    {
        cout << "I am a constructor of child class, student" << endl;
    }

    Student(string name, int age, int rollNumber, int fees)
    {
        cout << "I am a parameterized constructor of child class, student" << endl;
        this->name = name;
        this->age = age;
        this->rollNumber = rollNumber;
        this->fees = fees;
    }

    ~Student()
    {
        cout << "I am a destructor of child class, student" << endl;
    }
};
 
int main()
{
    Student s1("Karan", 20, 5534, 125000);
    s1.work();

    Human h;
    Student st;

    /*
    I am a constructor of parent class, human
    I am a parameterized constructor of child class, student
    I am working
    I am a constructor of parent class, human
    I am a constructor of parent class, human
    I am a constructor of child class, student
    I am a destructor of child class, student
    I am a destructor of parent class, human
    I am a destructor of parent class, human
    I am a destructor of child class, student
    I am a destructor of parent class, human
    */
}