#include <iostream>
using namespace std;

class Customer
{
    string name;
    int accountNumber;
    int balance;

public:

    static int countCustomer;
    static int totalBalance;
    
    //* Constructor
    Customer(string name, int accountNumber, int balance) {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;

        countCustomer++;
        totalBalance += balance;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int Customer::countCustomer = 0;
int Customer::totalBalance = 0;

int main()
{
    int countCustomer = 0;

    Customer C1("Karan", 1234, 10000);
    Customer C2("Bhavika", 4321, 20000);
    Customer C3("Chintu", 9425, 50000);
    cout << endl;

    C1.display(); cout << endl;
    C2.display(); cout << endl;
    C3.display(); cout << endl;

    /*
    Name: Karan
    Account Number: 1234
    Balance: 10000

    Name: Bhavika
    Account Number: 4321
    Balance: 20000

    Name: Chintu
    Account Number: 9425
    Balance: 50000
    */

    cout << "Total Customer: " << Customer::totalBalance << endl;
    cout << "Total Balance:  " << Customer::countCustomer << endl;
}