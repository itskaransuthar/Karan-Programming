// Binary Search

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *, int, int);

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

    int answer = binarySearch(arr, n, key);

    if(answer != -1)
        cout << "\nKey " << key << " found at index " << answer;
    else
        cout << "\nKey " << key << " is not found";
}

/// If array is inputted in ascending order
int binarySearch(int *Arr, int n, int key)
{
    int low = 0, high = n - 1;
    while(low <= high)
    {
        int mid = (high - low) / 2 + low;

        if(Arr[mid] < key)
            low = mid + 1;

        else if(Arr[mid] > key)
            high = mid - 1;
        
        else 
            return mid;
    }

    return -1;
}

/*
/// If array is inputted in descending order
int binarySearch(int *Arr, int n, int key)
{
    int low = 0, high = n - 1;
    while(low <= high)
    {
        int mid = (high - low) / 2 + low;

        if(Arr[mid] < key)
            high = mid - 1;

        else if(Arr[mid] > key)
            low = mid + 1;
        
        else 
            return mid;
    }

    return -1;
}
*/