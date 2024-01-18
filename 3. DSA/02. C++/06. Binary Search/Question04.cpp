// Find First and Last Position of Element in Sorted Array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // First Position of Element in Sorted Array
    int firstOccurrence(vector<int> Arr, int key)
    {
        int n = Arr.size();

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
    
    // Last Position of Element in Sorted Array
    int lastOccurrence(vector<int> Arr, int key)
    {
        int n = Arr.size();

        int low = 0, high = n - 1, last = -1;
        while(low <= high)
        {
            int mid = (high - low) / 2 + low;
            
            if (Arr[mid] == key)
            {
                last = mid;
                low = mid + 1;
            }

            else if(Arr[mid] < key)
                low = mid + 1;

            else // Arr[mid] > key
                high = mid - 1;
        }

        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurrence(nums, target);
        int last = lastOccurrence(nums, target);

        vector<int>result(2);
        result[0] = first;
        result[1] = last;

        return result;
    }
};

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(n);
    
    cout << "Enter elements of vector: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target/key: ";
    cin >> target;

    Solution obj;

    vector<int> answer(2);
    answer = obj.searchRange(nums, target);

    cout << "\nFirst Position of Element in Sorted Array is " << answer[0] << " and Last Position of Element in Sorted Array is " << answer[1];
}