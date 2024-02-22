#include <iostream>
using namespace std;

class Deque {
    int front, rear, size;
    int *arr;

public:     
    Deque (int size) {
        front = rear = -1;
        this -> size = size;

        arr = new int[size];
    }

    // Checking whether array(deque) is empty or not
    bool isEmpty()
    {
        if(front == -1)
            return true;
        
        return false;
    }

    // Checking whether array(deque) is full or not
    bool isFull()
    {
        if(front == (rear + 1) % size)
            return true;

        return false;
    }

    // Push at the beginning of the array
    void push_front(int data)
    {
        if(isFull())
            return;

        if(isEmpty())   
        {
            front = rear = 0;
            arr[front] = data;
            return;
        }

        front = front - 1;

        if(front == -1)
            front = size - 1;

        arr[front] = data;
        return;
    }

    // Push at the end of the array
    void push_back(int data)
    {
        if(isFull())
            return;
        
        if(isEmpty())
        {
            front = rear = 0;
            arr[front] = data;
            return;
        }

        rear = (rear + 1) % size;

        arr[rear] = data;
        return;
    }

    // Pop at the beginning of the array
    int pop_front()
    {
        if(isEmpty())
            return -1;
        
        int answer = arr[front];

        if(front == rear)
        {
            front = rear = -1;
            return answer;
        }

        front = (front + 1) % size;
        return answer;
    }

    // Pop from the last of the array
    int pop_back()
    {
        if(isEmpty())  
            return -1;

        int answer = arr[rear];

        if(front == rear)
        {
            front = rear = -1;
            return answer;
        }

        rear = rear - 1;
        if(rear == -1)
            rear = size - 1;
        
        return answer;
    }

    // Displaying Array
    void display()
    {
        cout << "Displaying Array: ";
        int temp = front;
        while(temp != rear)
        {
            cout << arr[temp] << " ";
            temp = (temp + 1) % size;
        }

        if(temp != -1)
            cout << arr[temp];

        cout << endl;
    }
};

int main()
{
    Deque obj = Deque(10);

    obj.display();

    obj.push_back(10);
    obj.push_back(20);
    obj.push_back(30);
    obj.push_back(40);
    obj.push_back(50);
    obj.push_front(11);
    obj.push_front(22);
    obj.push_front(33);
    obj.push_front(44);
    obj.push_front(55);

    obj.display();

    obj.pop_front();
    obj.pop_front();
    obj.pop_front();
    obj.pop_back();
    obj.pop_back();
    obj.pop_back();

    obj.display();
}