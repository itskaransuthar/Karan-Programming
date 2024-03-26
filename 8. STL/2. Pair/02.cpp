#include <iostream>
using namespace std;

int main()
{
    pair <string, pair<int, string>> p;
    // Name, Age, Gender

    p.first = "Karan";
    p.second.first = 21;
    p.second.second = "Male";

    cout << p.first << " " << p.second.first << " " << p.second.second << endl;

    pair <string, pair<int, pair<int, pair<int, string>>>> q = make_pair("Karan", make_pair(21, make_pair(6, make_pair(90, "Male"))));
    // Name, Age, Height, Weight, Gender

    cout << q.first << " " << q.second.first << " " << q.second.second.first << " " << q.second.second.second.first << " " << q.second.second.second.second << endl;
}