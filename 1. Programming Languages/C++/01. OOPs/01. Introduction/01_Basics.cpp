//? OOP (Object Oriented Programming):- It is an approach or a programming pattern where the programs are structured around object rather than function and logic

//* Let's store student's data
/* EXAMPLE
Name: Karan Suthar
Age: 21
Roll Number: 17
Grade: A

Name: Bhavika Garg
Age: 22
Roll Number: 18
Grade: B

Name: Aniket Sharma
Age: 21
Roll Number: 38
Grade: B

Name: Divya Aggrawal
Age: 20
Roll Number: 23
Grade: F

Name: Laxmi Kumar
Age: 21
Roll Number: 5
Grade: D
*/

#include <iostream>
using namespace std;

void displayStudent(string, int, int, string);

int main()
{
    string name1 = "Karan Suthar";
    int age1 = 21;
    int rollNumber1 = 17;
    string grade1 = "A";

    string name2 = "Bhavika Garg";
    int age2 = 22;
    int rollNumber2 = 18;
    string grade2 = "B";

    string name3 = "Aniket Sharma";
    int age3 = 21;
    int rollNumber3 = 38;
    string grade3 = "B";

    string name4 = "Divya Aggrawal";
    int age4 = 20;
    int rollNumber4 = 23;
    string grade4 = "F";

    string name5 = "Laxmi Kumar";
    int age5 = 21;
    int rollNumber5 = 5;
    string grade5 = "D";

    // Displaying student's data
    displayStudent(name1, age1, rollNumber1, grade1);
    cout << endl;
    displayStudent(name2, age2, rollNumber2, grade2);
    cout << endl;
    displayStudent(name3, age3, rollNumber3, grade3);
    cout << endl;
    displayStudent(name4, age4, rollNumber4, grade4);
    cout << endl;
    displayStudent(name5, age5, rollNumber5, grade5);
}

void displayStudent(string name, int age, int rollNumber, string grade)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Grade: " << grade << endl;
}

//* Can't I club all these data into a single structure or class?
//? Yes, we can club all these data into a single structure or class.
/*
class Student
{
    string name;
    int age;
    int rollNumber;
    string grade;
}s1;

class Student is a data type and s1 is an object of Student data type, class is a user defined data type.

To access data members of a class, we use the dot operator.
For example, 
            s1.name = "Karan Suthar";
            s1.age = 21;
            s1.rollNumber = 17;
            s1.grade = "A";
*/