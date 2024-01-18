#include <iostream>
using namespace std;

class Human
{
    string name1;
    int age1, weight1;

protected:
    string name2;
    int age2, weight2;

public: 
    string name3;
    int age3, weight3;
};

class Student: protected Human
{
    int rollNumber, fees;

public: 
    void fun(string a, string b, int c, int d)
    {
        // name1 = "Hello Ji"; //! Error: private members can't be accessed even in child class 
        name2 = a;
        name3 = b;
        rollNumber = c;
        fees = d;
    }

    void display()
    {
        cout << name2 << " " << name3 << endl;
        cout << rollNumber << endl;
        cout << fees << endl;
    }
};

int main()
{
    Student s1;
    // s1.name1 = "Karan"; //! Error: private can't be accessed because name1 is private

    // s1.name2 = "Karan"; //! Error : protected can't be accessed because name2 is protected and we can't access protected data from external code

    // s1.name3 = "Karan"; //! Error: protected can't be accessed because name3 is protected and we can't access protected data from external code

    s1.fun("Karan", "Suthar", 5534, 125000);
    s1.display();

    /*
    Karan Suthar
    5534
    125000
    */
}