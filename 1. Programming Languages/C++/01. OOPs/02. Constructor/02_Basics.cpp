/*
Inline Constructor (Part 1)
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

    //* Parameterized Constructor
    Customer(string name, int accountNumber) {
        cout << "Parameterized Constructor is Called" << endl;
        this->name = name;
        this->accountNumber = accountNumber;
    }

    //* Parameterized Constructor
    // Customer(string name, int accountNumber, int bal) {
    //     cout << "Parameterized Constructor is Called" << endl;
    //     this->name = name;
    //     this->accountNumber = accountNumber;
    //     this->balance = bal;
    // }

    //* Inline Constructor
    inline Customer(string a, int b, int c): name(a), accountNumber(b), balance(c) {
        cout << "Inline Constructor is Called" << endl;
    }

    //! Note: Constructor cannot be redeclared

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
    Name: Karan
    Account Number: 1234
    Balance: 10000
    */
}