/*
1. Set stores only unique elements
2. Set stores value in sorted order (ascending / descending)
*/

#include <iostream>
#include <set>
using namespace std;

//! Note: Searching, Inserting, Deleting using set = constant = O(logn) because set is implemented using AVL Trees (Self Balanced BST) and can also be implemented using Red Black Tree

//* Agar array ke through implement karvate toh time complexity for searching toh O(logn) hi hota lekin time complexity for inserting and deleting O(n) ho jata

int main()
{
    set<int> s;
    // set<int, less_equal<int>> s;
    // set<int, greater<int>> s;
    // set<int, greater_equal<int>> s;

    // s.insert(20);
    s = {10, 30, 30, 30, 20, 20, 40, 40, 40, 40, 40};

    s.insert(50);
    s.insert(50);
    s.insert(50);
    s.insert(60);

    for(auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    
    cout << endl;

    // 10 20 30 40 50 60

    cout << *s.find(10) << endl; // 10
    cout << *s.find(20) << endl; // 20
    cout << *s.find(30) << endl; // 30
    cout << *s.find(40) << endl; // 40
    cout << *s.find(50) << endl; // 50
    cout << *s.find(60) << endl; // 60
    cout << *s.find(70) << endl; // 6
    cout << *s.find(80) << endl; // 6

    if(s.find(30) != s.end())
        cout << "Present" << endl;
    else    
        cout << "Absent" << endl;

    // Present

    cout << s.count(30) << endl; // 1
    cout << s.count(90) << endl; // 0

    if(s.count(30))
        cout << "Present\n";
    else
        cout << "Absent\n";

    // Present

    s.erase(30);
    s.erase(70); // No error

    for(auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    
    cout << endl;

    // 10 20 40 50 60
}