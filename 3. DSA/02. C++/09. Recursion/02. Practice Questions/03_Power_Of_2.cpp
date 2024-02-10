// Power of 2

#include <iostream>
using namespace std;

int powerIterative(int, int);
int powerRecursive(int, int);

int main()
{
    int n, p;

    cout << "Enter n: "; cin >> n;
    cout << "Enter p: "; cin >> p;

    cout << powerIterative(n, p) << endl;
    cout << powerRecursive(n, p) << endl;
}

int powerIterative(int n, int p)
{
    int answer = 1;
    for (int i = 1; i <= p; i++)
    {
        answer *= n;
    }

    return answer;
}

int powerRecursive(int n, int p)
{
    // Base Condition 
    if(p == 0)
        return 1;

    // Recursion
    return n * powerRecursive(n, p - 1);
}