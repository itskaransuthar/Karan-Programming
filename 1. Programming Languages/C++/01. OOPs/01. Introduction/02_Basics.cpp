#include <iostream>
using namespace std;

void displayStudent(string, int, int, string);

class Student {
public:
    string name;
    int age;
    int rollNumber;
    string grade;
}s1;

//* class Student is a data type
//? s1 is an object of Student data type

/*
There are 3 types of access modifiers in C++:
1. Public
2. Private (Default)
3. Protected

Public: Anyone can access
Private: Only the class can access
Protected: Only the class and its children can access
*/

int main()
{
    Student s2;
    //* Student is a data type 
    //? s2 is an object of Student data type

    s1.name = "Karan Suthar";
    s1.age = 21;
    s1.rollNumber = 17;
    s1.grade = "A";

    displayStudent(s1.name, s1.age, s1.rollNumber, s1.grade);
    cout << endl;

    s2.name = "Bhavika Garg";
    s2.age = 22;
    s2.rollNumber = 18;
    s2.grade = "B";

    displayStudent(s2.name, s2.age, s2.rollNumber, s2.grade);
}

void displayStudent(string name, int age, int rollNumber, string grade)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Grade: " << grade << endl;
}