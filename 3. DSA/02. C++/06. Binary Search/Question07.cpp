// Count the zeros

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // First Occurrence of 0
        int low = 0, high = n - 1, first = -1;
        
        while(low <= high)
        {
            int mid = (high - low) / 2 + low;
            
            if(arr[mid] == 0)
            {
                first = mid;
                high = mid - 1;
            }
            
            else // arr[mid] == 1
                low = mid + 1;
        }
        
        if(first == -1)
            return 0;
        
        // return (n - 1) - first + 1;
        return n - first;
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int *A = new int(n);

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++)
        cin >> A[i];

    Solution obj;

    int answer = obj.countZeroes(A, n);
    cout << "\nNumber of zeros in given array: " << answer;

    return 0;
}