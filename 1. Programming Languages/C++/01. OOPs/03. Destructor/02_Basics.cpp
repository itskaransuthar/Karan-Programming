#include <iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

public: 
    Customer()
    {
        name = "4";
        cout << "Constructor is A" << name << endl;
    }

    Customer(string name)
    {
        this->name = name;
        cout << "Constructor is A" << name << endl; 
    }

    ~Customer()
    {
        delete data;
        cout << "Destructor is A" << name << endl;
    }
};

int main()
{
    Customer A1("1"), A2("2"), A3("3");

    //? Customer *A4 = new Customer;
    Customer *A4 = new Customer();
    // (Both are same)

    delete A4;

    /*
    Constructor is A1
    Constructor is A2
    Constructor is A3
    Constructor is A4
    Destructor is A4
    Destructor is A3
    Destructor is A2
    Destructor is A1
    */
}

/*
? Q. Why Destructor is called in reverse order?
! Customer Object1;
! Customer Object2(Object1);

* => Suppose that Object2 uses some internal resources of Object1 and is valid as long as Object1 is valid. For example, Object2s destructor accesses Object1's internal resource. If it weren't for the guarantee of reverse order of destruction, this would lead to problems.
*/