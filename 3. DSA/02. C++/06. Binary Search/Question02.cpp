// Find First Position of Element in Sorted Array

#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(int *, int, int);

/*
Time Complexity: 
    1. Worst Case = O(nlogn)
    2. Best Case = Ω(1)
    3. Average Case = Θ(nlogn)

Space Complexity:
    1. Input Space = O(n)
    2. Auxiliary Space = O(1)
    3. Total Space = O(n)

< Total Space = Auxiliary Space + Input Space>
*/

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int *arr = new int(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;

    int firstIndex = firstOccurrence(arr, n, key);

    if(firstIndex != -1)
        cout << "\nFirst Occurrence of Key " << key << " found at index " << firstIndex;
    else
        cout << "\nKey " << key << " is not found";
}

/*
int firstOccurrence(int *Arr, int n, int key)
{
    int low = 0, high = n - 1;
    while(low <= high)
    {
        int mid = (high - low) / 2 + low;

        if (Arr[mid] == key)
        {
            if (mid == 0)
                return mid;

            if (Arr[mid - 1] != key)
                return mid;
        }

        if(Arr[mid] < key)
            low = mid + 1;

        else // Arr[mid] >= key
            high = mid - 1;
    }

    return -1;
}
*/

/// Alternate Method
int firstOccurrence(int *Arr, int n, int key)
{
    int low = 0, high = n - 1, first = -1;
    while(low <= high)
    {
        int mid = (high - low) / 2 + low;

        if (Arr[mid] == key)
        {
            first = mid;
            high = mid - 1;
        }

        else if(Arr[mid] < key)
            low = mid + 1;

        else 
            high = mid - 1;
    }

    return first;
}