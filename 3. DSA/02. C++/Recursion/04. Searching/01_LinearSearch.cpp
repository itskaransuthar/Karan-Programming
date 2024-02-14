#include <iostream>
using namespace std;

int linearSearch(int *arr, int index, int size, int target)
{
    // Base Condition
    if(index == size)
        return -1;
    
    if(arr[index] == target)
        return index;

    // Recursion
    return linearSearch(arr, index + 1, size, target);
}

int main()
{
    int A[10] = {43, 13, 59, 32, 9, 54, 12, 49, 32, 11};
    //            0   1   2   3  4   5   6   7   8   9

    cout << "Element is present at index: " << linearSearch(A, 0, 10, 49);
}