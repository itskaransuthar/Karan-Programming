#include <iostream>
#include <list>
using namespace std;

//!  Note: Doubly Linked List = List

int main()
{
    list <int> l1;
    l1.push_back(30);
    l1.push_back(50);
    l1.push_back(-101);
    l1.push_front(10);
    l1.push_front(5);
    l1.push_front(-100);

    cout << l1.front() << endl; // -100
    cout << l1.back() << endl; // -101

    l1.pop_front();
    l1.pop_back();

    cout << l1.front() << endl; // 5
    cout << l1.back() << endl; // 50

    cout << l1.size() << endl; // 4

    // Method 1: Print list
    for(auto i: l1)
        cout << i << " ";

    cout << endl;

    // Method 2: Print list
    for(auto i = l1.begin(); i != l1.end(); i++)
        cout << *i << " ";

    cout << endl;

    // Method 3: Print list
    for(list<int>::iterator i = l1.begin(); i != l1.end(); i++)
        cout << *i << " ";

    cout << endl;

    // OUTPUT: 5 10 30 50

    // Print reverse of list
    for (auto i = l1.rbegin(); i != l1.rend(); i++)
        cout << *i << " ";

    cout << endl;

    // 50 30 10 5
}