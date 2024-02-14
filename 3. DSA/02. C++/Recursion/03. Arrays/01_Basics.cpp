#include <iostream>
using namespace std;

// Printing Array (Method 1)
void displayArray1(int *arr, int i, int n)
{
    // Base Condition
    if(i == n)
    {
        cout << endl;
        return;
    }

    // Recursion
    cout << arr[i] << " ";
    return displayArray1(arr, i + 1, n);
}

void displayArray2(int *arr, int n)
{
    // Base Condition
    if(n == 0)
    {
        return;
    }

    displayArray2(arr, n - 1);
    cout << arr[n - 1] << " ";
}

int main()
{
    int A[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << "Printing Array: ";
    displayArray1(A, 0, 10);

    cout << "Printing Array: ";
    displayArray2(A, 10);
}