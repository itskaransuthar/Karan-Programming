// Sum of square of N number

#include <iostream>
using namespace std;

int sumSquareIterative(int);
int sumSquareRecursive(int);

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << sumSquareIterative(n) << endl;
    cout << sumSquareRecursive(n) << endl;
}

int sumSquareIterative(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    return sum;
}

int sumSquareRecursive(int n)
{
    if(n == 1)
        return 1;

    return sumSquareRecursive(n - 1) + n * n;
}