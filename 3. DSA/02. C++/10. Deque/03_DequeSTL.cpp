#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_front(11);
    dq.push_front(22);
    dq.push_front(33);
    dq.push_front(44);

    cout << "First element of deque: " << dq.front() << endl;
    cout << "Last element of deque: " << dq.back() << endl;
    cout << "Size of deque: " << dq.size() << endl;

    dq.pop_back();
    dq.pop_back();
    dq.pop_front();
    dq.pop_front();

    cout << "---------------------------" << endl;

    cout << "First element of deque: " << dq.front() << endl;
    cout << "Last element of deque: " << dq.back() << endl;
    cout << "Size of deque: " << dq.size() << endl;
}