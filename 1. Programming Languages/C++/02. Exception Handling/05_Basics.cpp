/*
User defined exception class
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

class BhaisahabInvalidAmountError: public runtime_error {
public:     
    BhaisahabInvalidAmountError(const string &msg): runtime_error(msg) {

    }
};

class BhaisahabInsufficientBalanceError: public runtime_error {
public: 
    BhaisahabInsufficientBalanceError(const string &msg): runtime_error(msg) {

    }
};

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
            throw BhaisahabInvalidAmountError("Amount should be greater than 0 bhai sahab");
        }
    }

    // Withdraw
    void Withdraw(int amount)
    {
        if(amount >= 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " rs is debited successfully bhai" << endl;
        }

        else if(amount < 0)
        {
            // throw "Amount should be greater than 0";
            throw BhaisahabInvalidAmountError("Amount should be greater than 0 bhai sahab");
        }

        else 
        {
            // throw "Not sufficient balance";
            throw BhaisahabInsufficientBalanceError("Not sufficient balance bhai sahab");
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
    catch (const BhaisahabInvalidAmountError e)
    {
        cout << "Exception Occurred: " << e.what() << endl;
    }

    catch (const BhaisahabInsufficientBalanceError &e)
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
    Exception Occurred: Not sufficient balance bhai sahab
    */
}