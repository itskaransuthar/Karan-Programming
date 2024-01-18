// Missing number in array 

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int originalSum = 0, expectedSum = n * (n + 1) / 2;
        
        for(int i = 0; i < n - 1; i++)
        {
            originalSum += array[i];
        }
        
        return (expectedSum - originalSum);
    }
}obj;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> A(n - 1);
    
    cout << "Enter elements of array: ";
    for(int i = 0; i < n - 1; i++)
        cin >> A[i];

    int answer = obj.missingNumber(A, n);

    cout << "\nMissing number in array is: " << answer;
}