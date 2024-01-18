#include <iostream>
using namespace std;

class Human
{
    string religion, color;

protected:
    string name;
    int age, weight;
};

class Student: private Human
{
    /*
        * 1) religion, color -> can't be accessed from outside the class because they are private
        * 2) name, age, weight -> can be accessed from child class only not the external code because they are protected
    */

private: 
    int rollNumber, fees;

public:
    Student(string name, int age, int weight, int rollNumber, int fees){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->rollNumber = rollNumber;
        this->fees = fees;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << " kgs" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Fees: " << fees << endl;
    }
};

class Teacher: public Human
{
    bool married;
    int salary;

public: 
    string subject;
    int experience;

    Teacher(string name, int age, string subject, int experience)
    {
        this->name = name;
        this->age = age;
        this->subject = subject;
        this->experience = experience;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Experience: " << experience << endl;
    }
};

int main()
{
    Student s1("Karan", 21, 95, 1234, 125000);
    s1.display(); cout << endl;

    /*
    Name: Karan
    Age: 21
    Weight: 95 kgs
    Roll Number: 1234
    Fees: 125000
    */

    Teacher t1("Amit Khurana", 37, "DSA", 12);
    t1.display();

    /*
    Name: Amit Khurana
    Age: 37
    Subject: DSA
    Experience: 12
    */
}