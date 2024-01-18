/*
CLASS
-> It is a user defined data type
-> It is a template/blueprint for creating objects
-> It is a collection of data members and member functions
*/

#include <iostream>
using namespace std;

class Student
{
    //* Data members are variables that are defined inside a class

    string name;
    int age;
    int rollNumber;
    string grade;

public:

    //* Member functions are functions that are defined inside a class

    //? Setters
    void setName(string name) {
        this->name = name;
    }

    void setAge(int Age) {
        age = Age;
    }

    void setRollNumber(int rollNumber) {
        this->rollNumber = rollNumber;
    }

    void setGrade(string grade) {
        (*this).grade = grade;
    }

    //? Getters
    string getName() {
        if(name == "")
            return "Invalid Name";

        return name;
    }

    int getAge() {
        if(age <= 0 and age >= 100)
            return -1;
            
        return age;
    }

    int getRollNumber() {
        return (*this).rollNumber;
    }

    string getGrade(int pin) {
        if(pin == 2819) 
            return this->grade;
        else 
            return "Invalid Pin";
    }
};

int main()
{
    Student s1;
    s1.setName("");
    s1.setAge(21);
    s1.setRollNumber(17);
    s1.setGrade("A");

    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;
    cout << "Roll Number: " << s1.getRollNumber() << endl;
    cout << "Grade: " << s1.getGrade(2819) << endl;

    /*
    Name: Invalid Name
    Age: 21
    Roll Number: 17
    Grade: A
    */

    Student s2;
    s2.setName("Bhavika Garg");
    s2.setAge(22);
    s2.setRollNumber(18);
    s2.setGrade("B");
    cout << endl;

    cout << "Name: " << s2.getName() << endl;
    cout << "Age: " << s2.getAge() << endl;
    cout << "Roll Number: " << s2.getRollNumber() << endl;
    cout << "Grade: " << s2.getGrade(32) << endl;

    /*
    Name: Bhavika Garg
    Age: 22
    Roll Number: 18
    Grade: Invalid Pin
    */

    return 0;
}