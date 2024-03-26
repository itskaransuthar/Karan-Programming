#include <iostream>
using namespace std;

class Pair {
    public:
    
    string first;
    int second;
};

struct PAIR {
    string first;
    int second;
};

int main()
{
    // Method 1 
    pair <string, int> p = {"Karan", 21};

    // Method 2
    pair <string, int> q;
    q = {"Karan", 21};

    // Method 3
    pair <string, int> r;
    r.first = "Karan";
    r.second = 21;

    // Method 4
    Pair s;
    s.first = "Karan";
    s.second = 21;

    // Method 5
    PAIR t;
    t.first = "Karan";
    t.second = 21;

    // Method 6
    pair <string, int> u = make_pair("Karan", 21);

    // Method 7
    pair <string, int> v;
    v = make_pair("Karan", 21);

    cout << p.first << " " << p.second << endl;
    cout << q.first << " " << q.second << endl;
    cout << r.first << " " << r.second << endl;
    cout << s.first << " " << s.second << endl;
    cout << t.first << " " << t.second << endl;
    cout << u.first << " " << u.second << endl;
    cout << v.first << " " << v.second << endl;

    /*
    OUTPUT: Karan 21
    */
}