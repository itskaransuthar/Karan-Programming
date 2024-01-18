/*
* An exception is an unexpected problem that arises during the execution of a program, our program terminates suddenly with some errors/issues. Exception occurs during the running of the program

* The try keyword represents a block of code that may throw an exception placed inside the try block. It's followed by one or more catch blocks. if an exception occurs, try block throws that exception.

* The catch statement represents a block of code that is executed when a particular exception is thrown from the try block. The code to handle the exception is written inside the catch block.

* An exception in C++ can be thrown using the throw keyword. When a program encounters a throw statement, then it immediately terminates the current function and starts finding a matching catch block to handle the thrown exception.
*/


#include <iostream>
using namespace std;

/*
class exception {
protected: 
    string msg;

public:
    exception(string msg) {
        this->msg = msg;
    }

    string what() {
        return msg;
    }
};

class runtime_error {
public:
    runtime_error(const string &msg): exception(msg);
}
*/

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
            // throw "Amount should be greater than 0";
            throw runtime_error("Amount should be greater than 0");
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
            // throw "Amount should be greater than 0";
            throw runtime_error("Amount should be greater than 0");
        }

        else 
        {
            // throw "Not sufficient balance";
            throw runtime_error("Not sufficient balance");
        }
    }
};

int main()
{
    /*
    const int &x = 10;
    const int x = 10;

    cout << x << endl; //* 10
    */

    /*
    int y = 10;
    int &x = y;

    cout << x << endl; //* 10
    */    

    Customer C1("Rohit", 5000, 10);

    try {
        C1.deposit(100);
        C1.Withdraw(6000);
        C1.deposit(200);
    } 
    /* 
    catch (const char *e)
    {
        cout << "Exception Occurred: " << e << endl;
    }
    */
    catch (const runtime_error &e)
    {
        cout << "Exception Occurred: " << e.what() << endl;
    }

    catch (const bad_alloc &e)
    {
        cout << "Exception Occurred: " << e.what() << endl;
    }

    catch (...) //? Default ‌वाला catch
    {
        cout << "Exception Occurred" << endl;
    }
    
    /*
    100 rs is credited successfully
    Exception Occurred: Not sufficient balance
    */
}