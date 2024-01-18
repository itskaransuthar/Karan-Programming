/*
Inline Constructor (Part 3)
*/

#include <iostream>
using namespace std;

class Customer
{
public:

    string name;
    int accountNumber;
    int balance;
    int *arr;

    //* Default Constructor
    Customer() {
        cout << "Default Constructor is Called" << endl;
        name = "";
        accountNumber = 0;
        balance = 500;
        arr = new int[100]; 
        //? Constructor is also used to take storage space 
    }

    //* Inline Constructor
    inline Customer(string name, int accountNumber, int bal): name(name), accountNumber(accountNumber), balance(bal) {
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
    Name: Karan
    Account Number: 1234
    Balance: 10000
    */
}