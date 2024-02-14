// Factorial of a given number using recursion

#include <iostream>
using namespace std;

int factorialIterative(int);
int factorialRecursive(int);

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << factorialIterative(n) << endl;
    cout << factorialRecursive(n) << endl;
}

int factorialIterative(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
        fact *= i;
        
    return fact;
}

int factorialRecursive(int n)
{
    // Base Condition
    if(n == 0 || n == 1)
        return 1;

    // Recursion 
    return n * factorialRecursive(n-1);
}