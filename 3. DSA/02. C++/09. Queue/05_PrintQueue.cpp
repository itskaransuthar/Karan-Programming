// Print all the elements in a queue

#include <iostream>
#include <queue> 
using namespace std;

void displayQueue(queue<int> q)
{
    cout << "Displaying Queue: ";

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;
}

int main()
{
    queue<int> q;

    q.push(8);
    q.push(5);
    q.push(3);
    q.push(2);
    q.push(9);

    displayQueue(q);

    q.pop();

    displayQueue(q);
}