/* 
Customer Example 
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

int main(){
    Customer C1 = Customer("Karan", 1234, 10000);
    C1.display(); cout << endl;

    /*
    Name: Karan
    Account Number: 1234
    Balance: 10000
    */

    Customer C2;
    C2 = Customer("Bhavika", 4321, -200);
    C2.display(); cout << endl;

    /*
    Name: Bhavika
    Account Number: 4321
    Balance: 0
    */

    C1.credit(505);
    C1.deposit(1705);
    C1.display();

    /*
    Name: Karan
    Account Number: 1234
    Balance: 11200
    */
}
