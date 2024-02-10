// Print natural even numbers from 1 to n using recursion

#include <iostream>
using namespace std;

void displayEven1(int, int);
void displayEven2(int);

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    displayEven1(2, n); 
    cout << endl;

    displayEven2(n);
}

void displayEven1(int start, int end)
{
    // Base Condition
    if(start > end)
    {
        return;
    }

    // Recursion
    cout << start << " ";
    displayEven1(start + 2, end);
}

void displayEven2(int num)
{
    // Base Condition
    if(num == 2)
    {
        cout << 2 << " ";
        return;
    }

    // Recursion
    displayEven2(num - 2);
    cout << num << " ";
}