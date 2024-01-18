/*
STATIC DATA MEMBER
-> They are attribute of classes or class member
-> They are declared using static keyword
-> Only one copy of that member is created for the entire class and is shared by all the objects
-> It is initialized before any object of this class is created
*/

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

    void displayStatic(int pin){
        if(pin == 2819) {
            cout << endl;
            cout << "Total Customer: " << countCustomer << endl;
            cout << "Total Balance: " << totalBalance << endl;
        }
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

    int pin, i;
    cout << "Enter pin: ";
    cin >> pin;

    for (i = 0; i < 2; i++)
    {
        if(pin != 2819) {
            cout << "Enter valid pin: "; 
            cin >> pin; 
        } else
        {
            C1.displayStatic(pin);
            break;
        }
    }

    if(i == 2) 
        cout << endl << "Sorry!!!, Try again" << endl;

    /*
    Enter pin: 24
    Enter valid pin: 2819

    Total Customer: 3
    Total Balance: 80000
    */

    Customer C4 = Customer("Chotu", 4253, 20000);
    cout << endl;

    C4.display();
    C4.displayStatic(2819); cout << endl;

    /*
    Name: Chotu
    Account Number: 4253
    Balance: 20000

    Total Customer: 4
    Total Balance: 100000
    */
}