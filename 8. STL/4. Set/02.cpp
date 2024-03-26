#include <iostream>
#include <set>
using namespace std;

class Person {
    public:

    string name;
    int age;

    bool operator < (const Person &other) const {
        return age < other.age; // For ascending order
        // return age < other.age; // For descending order
    }

    Person(string name, int age)
    {
        this -> name = name;
        this -> age = age;
    }
};

int main()
{
    set<Person> s;

    Person p1 = Person("Shiv", 22);
    Person p2 = Person("Karan", 21);

    s.insert(p1);
    s.insert(p2);

    for (auto i = s.begin(); i != s.end(); i++)
        cout << (*i).name << " " << (*i).age << endl;
}