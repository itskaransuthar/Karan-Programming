/*
   ________           ___________         __________
   __Male__           __Student__         __Female__
       /\                  /\                 /\
        \\                //\\                //
         \\              //  \\              //  
          \\            //    \\            //  
           \\__________//      \\__________//
            _____Boy____         ____Girl___
*/


#include <iostream>
using namespace std;

class Student {
public: 
    Student()
    {
        cout << "Student Constructor" << endl;
    }

    void print()
    {
        cout << "I am Student" << endl;
    }

    ~Student()
    {
        cout << "Student Destructor" << endl;
    }
};

class Male {
public: 
    Male()
    {
        cout << "Male Constructor" << endl;
    }

    void print()
    {
        cout << "I am Male" << endl;
    }

    ~Male()
    {
        cout << "Male Destructor" << endl;
    }
};

class Female {
public: 
    Female()
    {
        cout << "Female Constructor" << endl;
    }

    void print()
    {
        cout << "I am Female" << endl;
    }

    ~Female()
    {
        cout << "Female Destructor" << endl;
    }
};

class Boy: public Student, public Male {
public: 
    Boy()
    {
        cout << "Boy Constructor" << endl;
    }

    void print()
    {
        cout << "I am Boy" << endl;
    }

    ~Boy()
    {
        cout << "Boy Destructor" << endl;
    }
};

class Girl: public Student, public Female {
public: 
    Girl()
    {
        cout << "Girl Constructor" << endl;
    }

    void print()
    {
        cout << "I am Girl" << endl;
    }

    ~Girl()
    {
        cout << "Girl Destructor" << endl;
    }
};

int main()
{
    Boy boy;
    /*
    Student Constructor
    Male Constructor
    Boy Constructor
    */

    Girl girl;
    /*
    Student Constructor
    Female Constructor
    Girl Constructor
    */

    boy.print();
    girl.print();
    return 0;

    /*
    I am Boy
    I am Girl
    */

    /*
    Girl Destructor
    Female Destructor
    Student Destructor
    Boy Destructor
    Male Destructor
    Student Destructor
    */
}