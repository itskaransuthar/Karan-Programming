#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int front, rear;
    int size;

public:
    Queue(int size)
    {
        arr = new int[size];
        front = rear = -1;
        this -> size = size;
    }

    // IsEmpty
    bool isEmpty()
    {
        if(front == -1)
            return true;
        
        return false;
    }

    // IsFull
    bool isFull()
    {
        if(rear == size - 1)
            return true;
        
        return false;
    }

    // Push
    void push(int x)
    {
        if(isFull())
            return;

        if(front == -1)
            front = 0;
        
        rear++;
        arr[rear] = x;
        return;
    }

    // Pop
    int pop()
    {
        if(isEmpty())
            return -1;
        
        int temp = arr[front];
        front++;

        if(front > rear)
            front = rear = -1;

        return temp;
    }

    // Returning front element
    int Front()
    {
        if(front == -1)
            return -1;
            
        return arr[front];
    }

    // Returning last element
    int Last()
    {
        if(rear == -1)
            return -1;
            
        return arr[rear];
    }
};

int main()
{
    Queue obj(5);

    obj.push(7);
    obj.push(9);
    obj.push(3);
    obj.push(6);
    obj.push(18);

    cout << "Front element: " << obj.Front() << endl;
    cout << "Rear element: " << obj.Last() << endl;

    cout << "------------------" << endl;
    cout << "Element Popped: " << obj.pop() << endl;
    cout << "Element Popped: " << obj.pop() << endl;
    cout << "Element Popped: " << obj.pop() << endl;
    cout << "Element Popped: " << obj.pop() << endl;
    cout << "Element Popped: " << obj.pop() << endl;
    cout << "------------------" << endl;

    cout << "Front element: " << obj.Front() << endl;
    cout << "Rear element: " << obj.Last() << endl;
}