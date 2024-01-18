/*
                     Human
                       /\
                       ||
                       ||
                       ||
           ____________||______________
           |___________________________|
           ||                         ||
           ||                         ||
        YouTuber                   Engineer
           /\                         /\
           ||                         ||
           ||_________________________||
           |___________________________|
                        ||
                        ||
                        ||
                        ||
                    CodeTeacher
*/

#include <iostream>
using namespace std;

class Human
{
public:
    string name;

    void display()
    {
        cout << "Name: " << name << endl;
    }
};

class Engineer: public virtual Human
{
    void money()
    {
        cout << "I earn upto crores" << endl;
    }

public:
    string specialization;

    void work()
    {
        cout << "I have specialization in " << specialization << endl;
    }
};

class YouTuber: public virtual Human
{
public: 
    int subscribers;

    void contentCreator()
    {
        cout << "I have a subscriber base of " << subscribers << endl;
    }
};

class CodeTeacher: public YouTuber, public Engineer
{
public:
    int salary;

    CodeTeacher(string name, string specialization, int subscribers, int salary)
    {   
        cout << "CodeTeacher" << endl;

        this -> name = name;
        this -> specialization = specialization;
        this -> subscribers = subscribers;
        this -> salary = salary;
    }
};

int main()
{
    CodeTeacher CT("Rohit", "CSE", 50000, 85000);
    CT.display();

    /*
    CodeTeacher
    Name: Rohit
    */
}