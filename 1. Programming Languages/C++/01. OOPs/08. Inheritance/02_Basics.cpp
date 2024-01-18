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

class Student: public Human
{
    int rollNumber, fees;
};

int main()
{
    Student s1;
    // s1.name1 = "Karan"; //! Error: private can't be accessed because name1 is private

    // s1.name2 = "Karan"; //! Error : protected can't be accessed because name2 is protected and we can't access protected data from external code

    s1.name3 = "Karan";
    cout << s1.name3 << endl;
}