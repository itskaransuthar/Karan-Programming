// Sum of N natural numbers

#include <iostream>
using namespace std;

int sumIterative(int);
int sumRecursive(int);

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << sumIterative(n) << endl;
    cout << sumRecursive(n) << endl;
}

int sumIterative(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    { 
        sum += i;
    }

    return sum;
}

int sumRecursive(int n)
{
    // Base Condition
    if(n == 0 or n == 1)
        return n;

    // Recursion
    return sumRecursive(n-1) + n;
}