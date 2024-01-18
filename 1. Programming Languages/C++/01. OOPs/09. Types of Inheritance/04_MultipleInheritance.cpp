/*
        Engineer                   YouTuber
           /\                         /\
           ||                         ||
           ||                         ||
           ||                         ||
           ||__________________________|
           _____________________________
                        ||
                        ||
                        ||
                        ||
                        ||
                        ||
                    CodeTeacher
*/

#include <iostream>
using namespace std;

class Engineer
{
    void money()
    {
        cout << "I earn upto crores" << endl;
    }

public:
    string specialization;

    Engineer()
    {
        cout << "Engineer" << endl;
    }

    void work()
    {
        cout << "I have specialization in " << specialization << endl;
    }

    ~Engineer()
    {
        cout << "Engineer Destruct" << endl;
    }
};

class YouTuber
{
public: 
    int subscribers;

    YouTuber()
    {
        cout << "YouTuber" << endl;
    }

    void contentCreator()
    {
        cout << "I have a subscriber base of " << subscribers << endl;
    }

    ~YouTuber()
    {
        cout << "YouTuber Destruct" << endl;
    }
};

class CodeTeacher: public Engineer, public YouTuber
{
public:
    string name;

    CodeTeacher()
    {
        cout << "CodeTeacher" << endl;
    }

    CodeTeacher(string name, string specialization, int subscribers)
    {   
        cout << "CodeTeacher" << endl;
        this -> name = name;
        this -> specialization = specialization;
        this -> subscribers = subscribers;
    }

    void showcase()
    {
        cout << "My name is " << name << endl;
        work();
        contentCreator();
    }

    ~CodeTeacher()
    {
        cout << "Code Teacher Destruct" << endl;
    }
};

int main()
{
    CodeTeacher CT("Rohit", "CSE", 50000);

    /*
    Engineer
    YouTuber
    CodeTeacher
    */

    CT.showcase();
    /*
    My name is Rohit
    I have specialization in CSE
    I have a subscriber base of 50000
    */

    CT.contentCreator();
    /*
    I have a subscriber base of 50000
    */

    CT.work();

    /*
    I have specialization in CSE
    */

    // CT.money(); //! money() function is a private so derived class and external code can't access that function

    /*
    Code Teacher Destruct
    YouTuber Destruct
    Engineer Destruct
    */
}