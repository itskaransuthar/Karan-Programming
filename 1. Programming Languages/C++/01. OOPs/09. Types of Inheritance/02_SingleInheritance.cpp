#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        cout << "Human" << endl;
        this->name = name;
        this->age = age;
    }

    void work()
    {
        cout << "I am working" << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student: public Human
{
    int rollNumber, fees;

public:
    Student(string name, int age, int rollNumber, int fees): Human(name, age)
    {
        cout << "Student" << endl;
        this->rollNumber = rollNumber;
        this->fees = fees;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Fees: " << fees << endl;
    }
};
 
int main()
{
    Student s1("Karan", 20, 5534, 125000);
    /*
    Human
    Student
    */

    s1.display();
    /*
    Name: Karan
    Age: 20
    Roll Number: 5534
    Fees: 125000
    */
}