// Peak Index in a Mountain Array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int low = 0, high = arr.size() - 1, ans = 0;

        while(low <= high)
        {
            // int mid = (high - low) / 2 + low; // --> Runtime Error 
            int mid = (low - high) / 2 + high; // --> No Error

            /*
            Dry Run:- 1 6 3 2 1
            */

            // Peak Element
            if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
                return mid;

            // Right Side Move
            else if(arr[mid] < arr[mid + 1]) // else if(arr[mid - 1] < arr[mid])
                low = mid + 1;

            // Left Side Move
            else
                high = mid - 1;
        }

        return -1;
    }
}obj;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of an array: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int answer = obj.peakIndexInMountainArray(arr);
    cout << "\nLargest element in array is " << arr[answer] << " found at index " << answer;
}