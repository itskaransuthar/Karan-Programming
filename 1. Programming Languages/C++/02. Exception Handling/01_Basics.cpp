/*
? EXCEPTION HANDLING:
-> An exception is an unexpected problem that arises during the execution of a program and out program terminated suddenly with some errors/issues

* TRY: It represents a block of code that may throw an exception placed inside the try block

* CATCH: It represents a block of code that is executed when a particular exception is thrown from the try block

* THROW: An exception in C++ can be thrown using the throw keyword
*/
#include <iostream>
using namespace std;

class Customer {
    string name;
    int balance, accountNumber;

public: 
    Customer(string name, int balance, int accountNumber)
    {
        this->name = name;
        this->balance = balance;
        this->accountNumber = accountNumber;
    }

    // Deposit
    void deposit(int amount)
    {
        if(amount >= 0)
        {
            balance += amount;
            cout << amount << " rs is credited successfully" << endl;
        }

        else 
        {
            cout << "Amount should be greater than 0\n";
        }
    }

    // Withdraw
    void Withdraw(int amount)
    {
        if(amount >= 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " rs is debited successfully" << endl;
        }

        else if(amount < 0)
        {
            cout << "Amount should be greater than 0\n";
        }

        else 
        {
            cout << "Not sufficient balance\n";
        }
    }
};

int main()
{
    Customer C1("Rohit", 5000, 10);
    C1.deposit(100);
    C1.Withdraw(6000);
    C1.deposit(200);

    /*
    100 rs is credited successfully
    Not sufficient balance
    200 rs is credited successfully
    */
}