// Linear Search

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        
        // Your code here
        for(int i = 0; i < N; i++)
        {
            if(arr[i] == X)
                return i;
        }
        
        return -1;
        
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

    int key;
    cout << "Enter key to be searched: ";
    cin >> key;

    Solution obj;
    int index = obj.search(Arr, n, key);

    if(index != -1)
        cout << "\nElement " << n << " found at index " << index;
    else 
        cout << "\nElement " << n << " not found";
}