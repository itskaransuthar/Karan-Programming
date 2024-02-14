#include <iostream>
using namespace std;

int minElement(int *arr, int index, int size)
{
    // Base Condition
    if(index == size)
    {
        return arr[index];
    }

    // Recursion
    return min(arr[index], minElement(arr, index + 1, size));

}

int main()
{
    int A[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << "Minimum element of array: " << minElement(A, 0, 10);
}