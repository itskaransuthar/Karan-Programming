#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    int rollNumber;
    string *name;
    string grade;
};

int main()
{
    //! ---------------------------------

    int x, *p;

    printf("Enter an integer: ");
    scanf("%d", &x); // Input: 55

    //* cout << "Enter an integer: ";
    //* cin >> x;

    p = &x;

    cout << x << endl;     // 55
    cout << *p << endl;    // 55

    //! ---------------------------------

    //? int *ptr = new int;
    int *ptr, y;
    ptr = new int;

    printf("Enter an integer: ");
    // scanf("%d", ptr); // Input: 55

    //* cout << "Enter an integer: ";
    cin >> *ptr;

    y = *ptr;

    cout << *ptr << endl;    // 55
    cout << y << endl;       // 55

    //! ---------------------------------

    Student *s;
    s = new Student;

    // *s->name = "Karan"; // Error: Segmentation fault
    // (*s).age = 21;
    // s->rollNumber = 17;
    // (*s).grade = "A";

    s->name = new string;
    // *s->name = "Karan Suthar";

    cout << "Enter name: ";
    cin >> *s->name; //! Don't Include Space

    cout << "Enter age: ";
    cin >> (*s).age;

    cout << "Enter roll number: ";
    cin >> s->rollNumber;

    cout << "Enter grade: ";
    cin >> (*s).grade;

    cout << *s->name << endl;       //* Karan
    cout << (*s).age << endl;       //* 21
    cout << s->rollNumber << endl;  //* 17
    cout << (*s).grade << endl;     //* A
}