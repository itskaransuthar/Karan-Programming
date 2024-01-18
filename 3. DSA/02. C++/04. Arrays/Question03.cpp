// Second Largest

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:	
    // Function return the largest element in the array
    int printLargest(int arr[], int n)
    {
        int maxEle = -1;
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] > maxEle)
	            maxEle = arr[i];
	    }
	    
	    return maxEle;
    }
    
	// Function returns the second largest element in the array
	int print2largest(int arr[], int n) 
	{
	    // code here
	    int maxElement = printLargest(arr, n);
	    int secondMax = -1;
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] != maxElement)
	        {
	            secondMax = max(secondMax, arr[i]);
	        }
	        
	        /*
	        if(arr[i] != maxElement && arr[i] > secondMax)
	        {
	            secondMax = arr[i];
	        }
	        */
	    }
	    
	    return secondMax;
	}
};

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // int *Arr = (int *) malloc (n * sizeof(int));
    int *Arr = new int(n);

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++)
    {
        // scanf("%d", &Arr[i]);
        cin >> Arr[i];
    }

    Solution obj;
    int answer = obj.print2largest(Arr, n);

    if(answer != -1)
        cout << "\nSecond largest element in an array: " << answer;
    else
        cout << "\nSecond largest element is not found in an array";
}