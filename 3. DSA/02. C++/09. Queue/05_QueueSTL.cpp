#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(13);
    q.push(14);
    q.push(6);

    cout << "-------------------" << endl;
    cout << "Front Element: " << q.front() << endl;
    cout << "Last Element: " << q.back() << endl;
    cout << "-------------------" << endl;

    q.pop();
    q.pop();

    cout << "-------------------" << endl;
    cout << "Front Element: " << q.front() << endl;
    cout << "Last Element: " << q.back() << endl;
    cout << "-------------------" << endl;

    cout << "-------------------" << endl;
    cout << "Size of queue: " << q.size() << endl;
    cout << "-------------------" << endl;
}