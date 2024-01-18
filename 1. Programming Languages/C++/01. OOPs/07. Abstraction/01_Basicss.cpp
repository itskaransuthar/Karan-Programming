#include "Customer.cpp"

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
