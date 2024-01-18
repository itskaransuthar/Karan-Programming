#include <iostream> 
using namespace std;

class Customer
{
    string name;
    int accountNumber;
    int balance;
    static int countCustomer;
    static int totalBalance;

public:
    //* Constructor
    Customer() {
        name = "Radha Radha";
    }
    
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

    static void displayStatic()
    {
        cout << "Total Customer: " << countCustomer << endl;
        cout << "Total Balance: " << totalBalance << endl;

        // cout << "Name: " << name << endl; //! Error: static member function cannot be called on non-static member

        Customer obj = Customer();
        cout << obj.name << endl;
    }
};

int Customer::countCustomer = 0;
int Customer::totalBalance = 0;

int main()
{
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

    C1.displayStatic(); cout << endl;
    C2.displayStatic(); cout << endl;

    /*
    Total Customer: 3
    Total Balance: 80000
    Radha Radha

    Total Customer: 3
    Total Balance: 80000
    Radha Radha
    */

    Customer::displayStatic(); cout << endl;

    /*
    Total Customer: 3
    Total Balance: 80000
    Radha Radha
    */
}