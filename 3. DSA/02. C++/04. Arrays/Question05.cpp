// nth term in Fibonacci Series

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int *A = new int(n);
    // int *A = (int *) malloc (n * sizeof(int));

    A[0] = 0, A[1] = 1;
    for(int i = 2; i < n; i++)
    {
        A[i] = A[i - 2] + A[i - 1];
    }

    cout << "\nPrinting Fibonacci Series upto n: ";
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    } cout << endl;
    cout << n << "th term of fibonacci series: " << A[n - 1];
}