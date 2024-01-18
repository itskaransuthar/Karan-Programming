/*
                         HUMAN
                          /\
                          ||
                          ||
      ____________________||________________________
      ______________________________________________
      ||                  ||                      ||
      ||                  ||                      ||
      ||                  ||                      ||
      ||                  ||                      ||
    STUDENT             TEACHER                  STAFF
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

    }
    
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << name << " " << age << endl;
    }

    void work()
    {
        cout << "I am working" << endl;
    }
};

class Student: public Human {
    int rollNumber, fees;

public:
    Student(string name, int age, int rollNumber, int fees): Human(name, age)
    {
        this -> rollNumber = rollNumber;
        this -> fees = fees;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Fees: " << fees << endl;
    }
};

class Teacher: public Human
{
    int salary;

public:
    //! Teacher constructor, Human के default constructor को call करेगा
    Teacher(string name, int age, int salary)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student S1("Karan", 21, 17, 125000);
    S1.display();

    /*
    Name: Karan
    Age : 21
    Roll Number: 17
    Fees: 125000
    */

    Teacher T1("Rohit", 28, 80000);
    T1.display();

    /*
    Name: Rohit
    Age : 28
    Salary: 80000
    */
}