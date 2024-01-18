/*
CONSTRUCTOR:
-> It is a special function that is called / invoked automatically at the time of object creation
-> Name of constructor is same as name of class
-> It does not have any return type
-> It is used to initialize the state of object

Constructor Overloading:
-> It is a feature of C++ where we can have multiple constructors with same name but different parameters

this pointer:
-> It is a special pointer that is used to access members of class
*/

#include <iostream>
using namespace std;

//* Valid है जी
struct Student 
{
    int a = 10;
};

//? Bank मे Customer का Account
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
    Customer(string name, int accountNumber, int bal) {
        cout << "Parameterized Constructor is Called" << endl;
        this->name = name;
        this->accountNumber = accountNumber;
        balance = bal;
    }
};

int main()
{
    // Customer C1;
    Customer C1 = Customer();                          //* Default Constructor is called
    // (Both are same)

    Customer C2 = Customer("Karan", 1234, 10000);      //* Parameterized Constructor is called

    Customer C3 = Customer("Rahul", 12);               //* Parameterized Constructor is called

    cout << C1.name << endl;                           //?
    cout << C2.name << endl;                           //? Karan
    cout << C3.name << endl;                           //? Rahul

    cout << C1.accountNumber << endl;                  //? 0
    cout << C2.accountNumber << endl;                  //? 1234
    cout << C3.accountNumber << endl;                  //? 12

    cout << C1.balance << endl;                        //? 500
    cout << C2.balance << endl;                        //? 10000
    cout << C3.balance << endl;                        //? GV
}