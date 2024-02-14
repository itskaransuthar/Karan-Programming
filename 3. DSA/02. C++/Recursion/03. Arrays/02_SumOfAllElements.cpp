#include <iostream>
using namespace std;

int totalSum(int *arr, int size, int sum)
{
    // Base Condition
    if(size == 0)
        return 0;

    // Recursion
    return totalSum(arr, size - 1, sum) + arr[size - 1];
}

int main()
{
    int A[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    cout << totalSum(A, 10, 0);
}