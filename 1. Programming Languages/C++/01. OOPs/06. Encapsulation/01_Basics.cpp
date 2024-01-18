/*
Encapsulation: 
-> Wrapping up of data and information in a single unit, while controlling access to them 
*/

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance;

public: 
    int age;

    Customer(string a, int b)
    {
        name = a;
        balance = b;
        age = 21;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Customer C1("Karan", 10000);
    C1.age = -4;

    C1.display(); 
    //! Note: Age can't be negative but here it is that's why we should keep our crucial data in private section only
}