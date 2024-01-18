/* 
Abstraction:
-> Displaying only essential information and hiding the details
*/

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int accountNumber;
    int balance;

public:
    //* Default Constructor
    Customer()
    {
        name = "None";
        accountNumber = 0;
        balance = 0;
    }

    //* Parameterized Constructor
    Customer(string name, int accountNumber, int balance) {
        this->name = name;
        this->accountNumber = accountNumber;
        if(balance >= 0)
            this->balance = balance;
        else 
            this->balance = 0;
    }

    //* Inline Constructor
    inline Customer(string a , int b): name(a), accountNumber(b)
    {
        balance = 0;
    }

    //* Copy Constructor 
    Customer(Customer &Org)
    {
        //? Copy Constructor <- Original Constructor
        name = Org.name;
        accountNumber = Org.accountNumber;
        balance = Org.balance;
    }

    //* Destructor
    ~Customer()
    {
        
    }

    //* Functions
    void deposit(int amount)
    {
        if(balance >= 0)
            balance += amount;
    }

    void credit(int amount)
    {
        if(amount > 0 && balance >= amount)
            balance -= amount;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};