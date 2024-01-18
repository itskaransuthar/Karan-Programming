/*
Copy Constructor
*/

#include <iostream>
using namespace std;

class Customer
{
public:
    string name;
    int accountNumber;
    int balance;

    //* Default Constructor
    Customer(){
        cout << "Default Constructor is Called" << endl;
    }

    //* Parameterized Constructor
    Customer(string name, int accountNumber){
        cout << "Parameterized Constructor is Called" << endl;
        this->name = name;
        this->accountNumber = accountNumber;
        balance = 500;
    }

    //* Parameterized Constructor
    // Customer(string name, int accountNumber, int bal){
    //     cout << "Parameterized Constructor is Called" << endl;
    //     this->name = name;
    //     this->accountNumber = accountNumber;
    //     balance = bal;
    // }

    //* Inline Constructor
    Customer(string a, int b, int balance): name(a), accountNumber(b) {
        cout << "Inline Constructor is Called" << endl;
        this->balance = balance;
    }

    //* Copy Constructor
    //! Customer(Customer B) => Error (Invalid Constructor)
    Customer(Customer &B)
    {
        cout << "Copy Constructor is Called" << endl;
        name = B.name;
        accountNumber = B.accountNumber;
        balance = B.balance;
    }

    //? Display the Customer Details (Properties)
    void display(){
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Customer C1;
    Customer C2("Karan", 1234, 10000);
    Customer C3("Karan", 1234);

    /*
    Default Constructor is Called
    Inline Constructor is Called
    Parameterized Constructor is Called
    */

    C1.display(); cout << endl;
    C2.display(); cout << endl;
    C3.display(); cout << endl;

    /*
    Name: 
    Account Number: 0
    Balance: 0

    Name: Karan
    Account Number: 1234
    Balance: 10000

    Name: Karan
    Account Number: 1234
    Balance: 500
    */

    //! Copy Constructor
    Customer C4(C3);
    C3.display(); cout << endl;
    C4.display(); cout << endl;

    /*
    Copy Constructor is Called
    Name: Karan
    Account Number: 1234
    Balance: 500

    Name: Karan
    Account Number: 1234
    Balance: 500
    */

    C4.name = "Bhavika";

    C3.display(); cout << endl;
    C4.display(); cout << endl;

    /*
    Name: Karan
    Account Number: 1234
    Balance: 500

    Name: Bhavika
    Account Number: 1234
    Balance: 500
    */

    C3.name = "Chintu";

    C3.display(); cout << endl;
    C4.display(); cout << endl;

    /*
    Name: Chintu
    Account Number: 1234
    Balance: 500

    Name: Bhavika
    Account Number: 1234
    Balance: 500
    */

    C3.name = "Karan"; //? Assigning original value

    Customer C5 = C3;
    C3.display(); cout << endl;
    C5.display(); cout << endl;

    /*
    Name: Karan
    Account Number: 1234
    Balance: 500

    Name: Karan
    Account Number: 1234
    Balance: 500
    */

    C5.name = "Bhavika";
    C3.display(); cout << endl;
    C5.display(); cout << endl;
    /*
    Name: Karan
    Account Number: 1234
    Balance: 500

    Name: Bhavika
    Account Number: 1234
    Balance: 500
    */

    C3.name = "Chintu";
    C3.display(); cout << endl;
    C4.display(); cout << endl;
    /*
    Name: Chintu
    Account Number: 1234
    Balance: 500

    Name: Bhavika
    Account Number: 1234
    Balance: 500
    */

    C3.name = "Karan"; //? Assigning original value
}