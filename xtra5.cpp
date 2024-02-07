#include <iostream>
using namespace std;

void fun()
{
    cout << "Hello Bachoo" << endl;
}

void fun1(void (*q)())
{
    cout << "Hello Kutto" << endl;
    q();
}

int main()
{
    void (*p)(); 
    p = fun;

    p();

    fun1(p);
}