// Find maximum in rotated sorted array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*
    int findMax(vector<int>& nums) {
        int n = nums.size(), low = 0, high = n - 1, ans = nums[n - 1];
        while(low <= high)
        {
            int mid = (low) + (high - low) / 2;

            /// Left Rotated Array
            if(nums[mid] >= nums[0]) 
            {
                ans = nums[mid];
                low = mid + 1;
            } 

            /// Right Rotated Array
            else // nums[mid] < nums[0]
            {
                high = mid - 1;
            }
        }

        return ans;
    }
    */

    int findMax(vector<int>& nums) {
        int n = nums.size(), low = 0, high = n - 1, ans = nums[n - 1];
        while(low <= high)
        {
            int mid = (low) + (high - low) / 2;

            /// Left Rotated Array
            if(nums[mid] > nums[n - 1])
            {
                ans = nums[mid];
                low = mid + 1;
            }

            /// Right Rotated Array
            else if(nums[mid] <= nums[n - 1])
            {
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int answer = Solution().findMax(arr);
    cout << "Maximum element in array is: " << answer << "\n";

    return 0;
}