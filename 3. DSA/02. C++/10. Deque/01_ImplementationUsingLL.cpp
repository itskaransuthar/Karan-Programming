#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

class Deque {
    Node *front, *back;

public:
    Deque()
    {
        front = NULL;
        back = NULL;
    }

    // Push at the beginning of the linked list
    void push_front(int data)
    {
        Node *temp = new Node(data);

        if(front == NULL)
        {
            front = back = temp;
            return;
        }

        temp -> next = front;
        front = temp;
        return;
    }

    // Push at the end of the linked list
    void push_back(int data)
    {
        Node *temp = new Node(data);

        if(front == NULL)
        {
            front = back = temp;
            return;
        }

        back -> next = temp;
        back = temp;
        return;
    }

    // Pop the element from start of the linked list
    int pop_front()
    {
        if(front == NULL)
            return -1;

        int answer = front -> data;
        Node *temp = front -> next;

        front -> next = NULL;
        delete front;

        front = temp;
        if(front == NULL)
            back = NULL;

        return answer;
    }

    // Pop the element from end of the linked list
    int pop_back()
    {
        if(front == NULL)
            return -1;

        int answer = back -> data;

        if(front == back)
        {
            delete front;
            front = back = NULL;

            return answer;
        }
        
        Node *temp = front;
        while(temp -> next -> next)
        {
            temp = temp -> next;
        }

        temp -> next = NULL;
        delete back;
        back = temp;

        return answer;
    }

    // Get first element in the linked list
    int getFront()
    {
        if(!front)
            return -1;
        
        return front -> data;
    }

    // Get last element in the linked list
    int getBack()
    {
        if(!back)
            return -1;

        return back -> data;
    }

    // Display deque
    void display()
    {
        cout << "Displaying Linked List: ";

        Node *temp = front;
        while(temp)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }

        cout << endl;
    }
};

int main()
{
    Deque obj = Deque();

    obj.push_front(10);
    obj.push_front(20);
    obj.push_front(30);
    obj.push_front(40);
    obj.push_front(50);
    obj.push_back(11);
    obj.push_back(22);
    obj.push_back(33);
    obj.push_back(44);
    obj.push_back(55);

    obj.display();

    obj.pop_front();
    obj.pop_front();
    obj.pop_front();
    obj.pop_front();
    obj.pop_front();

    cout << "Front Element: " << obj.getFront() << endl;
    cout << "Back Element: " << obj.getBack() << endl;

    obj.pop_back();
    obj.pop_back();
    obj.pop_back();
    obj.pop_back();

    obj.display();
}