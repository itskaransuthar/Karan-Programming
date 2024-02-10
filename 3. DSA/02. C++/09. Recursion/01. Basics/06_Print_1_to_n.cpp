// Print 1 to n natural numbers using recursion

#include <iostream>
using namespace std;

void print1(int, int);
void print2(int);

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    print1(1, n);
    print2(n);
}

void print1(int start, int end)
{
    // Base Condition
    if(start == end)
    {
        cout << start << endl;
        return;
    }

    // Recursion
    cout << start << " ";
    print1(start + 1, end);
}

void print2(int n)
{
    // Base Condition
    if(n == 1)
    {
        cout << n << " ";
        return;
    }

    // Recursion
    print2(n - 1);
    cout << n << " ";
}