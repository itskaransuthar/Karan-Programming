/*
        PERSON              ANIMAL
          /\                  /\
          ||                  ||
          ||                  ||
        EMPLOYEE             DOGS
          /\                  /\
          ||                  ||
          ||                  ||
        MANAGER         GERMAN SHEPHERD
*/

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "Hello my name is: " << name << endl;
    }
};

class Employee: public Person
{
protected:
    int salary;

public:
    void monthlySalary()
    {
        cout << "My monthly salary is: " << salary << endl;
    }
};

class Manager: public Employee
{
public: 
    string department;
    int numberOfEmployees;

    Manager(string name, int salary, string department, int noe)
    {
        this -> name = name;
        this -> salary = salary;
        this -> department = department;
        numberOfEmployees = noe;
    }

    void work()
    {
        cout << "I am leading the department " << department << endl;
    }
};

int main()
{
    Manager M1("Karan", 80000, "Finance", 15);

    M1.work();
    M1.monthlySalary();
    M1.introduce();
}