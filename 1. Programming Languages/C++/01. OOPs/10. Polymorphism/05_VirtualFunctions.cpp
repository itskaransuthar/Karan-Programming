#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    virtual void speak()
    {
        cout << "Hu Hu" << endl;
    }
};

class Dog: public Animal
{
public: 
    void speak()
    {
        cout << "Bark" << endl;
    }
};

class Cat: public Animal
{
public:
    void speak()
    {
        cout << "Meow" << endl;
    }
};

int main()
{
    Animal A;
    Dog D;

    A.speak();
    D.speak();

    /*
    Hu Hu
    Bark
    */

    Animal *A1; 
    A1 = new Dog; //* A1 = new Dog(); (Both are Same)
    A1->speak();

    /*
    Bark
    */

    vector<Animal *> animals;
    animals.push_back(new Dog);
    animals.push_back(new Cat());
    animals.push_back(new Animal);
    animals.push_back(new Cat);
    animals.push_back(new Dog());

    for(int i = 0; i < animals.size(); i++)
    {
        A1 = animals[i];
        A1->speak();
    }

    /* 
    ? If virtual keyword is absent
    Hu Hu
    Hu Hu
    Hu Hu
    Hu Hu
    Hu Hu
    */

    /*
    ? If virtual keyword is present
    Bark
    Meow
    Hu Hu
    Meow
    Bark
    */
}