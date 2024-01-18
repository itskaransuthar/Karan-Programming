// Search in a Rotated Sorted Array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size(), low = 0, high = n - 1;

        while(low <= high)
        {
            int mid = (high - low) / 2 + low;

            if(nums[mid] == target)
                return mid;
            
            // Left Sorted Array
            else if(nums[mid] >= nums[0])
            {
                if(nums[0] <= target && target <= nums[mid])
                    high = mid - 1;
                
                else 
                    low = mid + 1;
            }

            // Right Sorted Array
            else if(nums[mid] < nums[0])
            {
                if(nums[mid] <= target && target <= nums[n - 1])
                    low = mid + 1;

                else 
                    high = mid - 1;
            }
        }

        return -1;
    }
};

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int answer = Solution().search(nums, target);

    if(answer == -1)
        cout << "\nTarget not found in array" << endl;
    else
        cout << "\nTarget found at index " << answer << endl;
}