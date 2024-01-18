// Number of Occurrences

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
    // First Position of Element in Sorted Array
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
    
    // Last Position of Element in Sorted Array
    int lastOccurrence(int *Arr, int n, int key)
    {
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
    
	/// If x is present in arr[] then returns the count of occurrences of x, otherwise returns 0
	int count(int arr[], int n, int x) {
	    // Code Here
	    int first = firstOccurrence(arr, n, x);
	    int last = lastOccurrence(arr, n, x);
	    
	    if(first == -1)
	        return 0;
	    
	    return last - first + 1;
	}
};

int main() 
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int *A = new int(n);

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++)
        cin >> A[i];

    int key;
    cout << "Enter key: ";
    cin >> key;

    Solution obj;

    int answer = obj.count(A, n, key);
    /// Count of occurrences of key/x

    cout << "\nNumber of occurrences of key " << key << " is " << answer;
}