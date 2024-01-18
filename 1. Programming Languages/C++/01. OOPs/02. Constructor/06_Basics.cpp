/*
Shallow Constructor

? Copy Constructor
Customer Obj1(Obj);
or
Customer Obj1 = Obj;

? Default assignment operator
Customer Obj2;
Obj2 = Obj1;
*/

#include <iostream>
using namespace std;

class Customer
{
public:
    string name;
    int accountNumber;
    int balance;
    int *ptr;

    //* Default Constructor
    Customer() {
        cout << "Default Constructor is Called" << endl;
        name = "Karan";
        accountNumber = 1234;
        balance = 10000;

        //? Let say it is an important collection of data
        //? It should not change by another constructor but it can change (Shallow Constructor)
        ptr = new int[5];
        for (int i = 0; i < 5; i++)
        {
            ptr[i] = (i + 1) * 10;
        }
    }

    //* Copy Constructor
    Customer(Customer &obj) {
        cout << "Copy Constructor is Called" << endl;
        name = obj.name;
        accountNumber = obj.accountNumber;
        balance = obj.balance;
        ptr = obj.ptr;
    }

    //* Display Function
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;

        for(int i = 0; i < 5; i++)
        {
            cout << ptr[i] << " ";
        } cout << endl;
    }
};

int main()
{
    Customer C1;
    Customer C2(C1);
    Customer C3 = C1;
    Customer C4;
    C4 = C1;

    /*
    Default Constructor is Called
    Copy Constructor is Called
    Copy Constructor is Called
    Default Constructor is Called
    */

    C1.display(); cout << endl;
    C2.display(); cout << endl;
    C3.display(); cout << endl;
    C4.display(); cout << endl;

    /*
    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 20 30 40 50 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 20 30 40 50 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 20 30 40 50 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 20 30 40 50 
    */

    C1.ptr[1] = 0;
    C1.name = "Bhavika";
    C1.display(); cout << endl;
    C2.display(); cout << endl;
    C3.display(); cout << endl;
    C4.display(); cout << endl;

    /*
    Name: Bhavika
    Account Number: 1234
    Balance: 10000
    10 0 30 40 50 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 30 40 50 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 30 40 50 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 30 40 50 
    */

    C1.name = "Karan"; //? Changing to original value

    C2.ptr[2] = -43;
    C2.name = "Bhavika";
    C1.display(); cout << endl;
    C2.display(); cout << endl;
    C3.display(); cout << endl;
    C4.display(); cout << endl;

    /*
    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 -43 40 50 

    Name: Bhavika
    Account Number: 1234
    Balance: 10000
    10 0 -43 40 50 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 -43 40 50 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 -43 40 50 
    */

    C2.name = "Karan"; //? Changing to original value

    C3.ptr[3] = 2500;
    C3.name = "Bhavika";
    C1.display(); cout << endl;
    C2.display(); cout << endl;
    C3.display(); cout << endl;
    C4.display(); cout << endl;

    /*
    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 -43 2500 50 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 -43 2500 50 

    Name: Bhavika
    Account Number: 1234
    Balance: 10000
    10 0 -43 2500 50 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 -43 2500 50
    */

    C3.name = "Karan"; //? Changing to original value

    C4.ptr[4] = 1000;
    C4.name = "Bhavika";
    C1.display(); cout << endl;
    C2.display(); cout << endl;
    C3.display(); cout << endl;
    C4.display(); cout << endl;

    /*
    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 -43 2500 1000 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 -43 2500 1000 

    Name: Karan
    Account Number: 1234
    Balance: 10000
    10 0 -43 2500 1000 

    Name: Bhavika
    Account Number: 1234
    Balance: 10000
    10 0 -43 2500 1000
    */

    C4.name = "Karan"; //? Changing to original value
}                                        