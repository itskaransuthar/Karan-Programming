// Search Insert Position

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while(low <= high)
        {
            int mid = (high - low) / 2 + low;

            if(nums[mid] < target)
                low = mid + 1;
            
            else if(nums[mid] > target)
                high = mid - 1;

            else 
                return mid;
        }

        return low;
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

    int key;
    cout << "Enter key: ";
    cin >> key;

    int answer = obj.searchInsert(arr, key);
    cout << "\nIndex of key " << key << ": " << answer;
}