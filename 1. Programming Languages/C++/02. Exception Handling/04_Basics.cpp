#include <iostream>
using namespace std;

/*
class exception {
protected:
    string msg;

public:
    exception(int msg)
    {
        this->msg = msg;
    }

    string what()
    {
        return msg;
    }
};

class bad_alloc: public exception {
public:
    bad_alloc()
    {

    }
};
*/

int main()
{
    try {
        int *A = new int[1000000000000000];
        cout << "Memory allocated successfully" << endl;
        delete[] A;
    }
    // catch(const exception &e)
    catch(const bad_alloc &e){
        cout << "Exception Occurred at line 7: " << e.what() << endl;

        /*
        Exception Occurred at line 7: std::bad_alloc
        */
    }
}

/*
Note: All are classes
* std::exception (Parent Class)
        ? std::bad_alloc
        ? std::bad_cast
        ? std::bad_typeid
        ? std::bad_exception
        ? std::logic_failure
                ! std::domain_error
                ! std::invalid_argument
                ! std::length_error
                ! std::out_of_range
        ? std::runtime_error
                ! std::overflow_error
                ! std::range_error
                ! std::underflow_error
*/