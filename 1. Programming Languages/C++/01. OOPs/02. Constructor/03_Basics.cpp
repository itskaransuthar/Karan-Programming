/*
Inline Constructor (Part 2)
*/

#include <iostream>
using namespace std;

class Customer
{
public:

    string name;
    int accountNumber;
    int balance;

    //* Default Constructor
    Customer() {
        cout << "Default Constructor is Called" << endl;
        name = "";
        accountNumber = 0;
        balance = 500;
    }

    //* Inline Constructor
    inline Customer(string name, int accountNumber, int bal)
    {
        cout << "Inline Constructor is Called" << endl;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Customer C1 = Customer("Karan", 1234, 10000);
    C1.display();

    /*
    Inline Constructor is Called
    Name: 
    Account Number: 4607
    Balance: 0

    *** Garbage Values ***
    */
}