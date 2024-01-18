// Insertion Sort

#include <bits/stdc++.h>
using namespace std;

void printArray(int *, int);
void insertionSort(int *, int);

/*
Time Complexity: 
    1. Worst Case = O(n²)
    2. Best Case = Ω(n)
    3. Average Case = Θ(n²)

Space Complexity: 
    1. Input Space = O(n)
    2. Auxiliary Space = O(1)
    3. Total Space = O(n)

< Total Space = Auxiliary Space + Input Space>
*/

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int(n);

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    cout << "Printing Array: ";
    printArray(arr, n);
}

void printArray(int *A, int N)
{
    for(int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
}

/*
/// Ascending (आगे से element को select करेंगे और place करेंगे)
void insertionSort(int *Arr, int n)
{
    for(int i = 1; i <= n - 1; i++)
    {
        int temp = Arr[i], j = i - 1;
        while(j >= 0)
        {
            if(Arr[j] > temp)
                Arr[j + 1] = Arr[j];
            else    
                break;
            
            j--;
        }

        Arr[j + 1] = temp;
    }
}
*/

/// Ascending (आखिर से element को select करेंगे और place करेंगे)
void insertionSort(int *Arr, int n)
{
    for(int i = n - 2; i >= 0; i--)
    {
        int temp = Arr[i], j = i + 1;
        while(j <= n - 1)
        {
            if(Arr[j] < temp)
                Arr[j - 1] = Arr[j];
            else    
                break;
            
            j++;
        }

        Arr[j - 1] = temp;
    }
}

/*
/// Descending (आगे से element को select करेंगे और place करेंगे)
void insertionSort(int *Arr, int n)
{
    for(int i = 1; i <= n - 1; i++)
    {
        int temp = Arr[i], j = i - 1;
        while(j >= 0)
        {
            if(Arr[j] > temp)
                Arr[j + 1] = Arr[j];
            else    
                break;
            
            j--;
        }

        Arr[j + 1] = temp;
    }
}

/// Descending (आखिर से element को select करेंगे और place करेंगे)
void insertionSort(int *Arr, int n)
{
    for(int i = 1; i <= n - 1; i++)
    {
        int temp = Arr[i], j = i - 1;
        while(j >= 0)
        {
            if(Arr[j] > temp)
                Arr[j + 1] = Arr[j];
            else    
                break;
            
            j--;
        }

        Arr[j + 1] = temp;
    }
}
*/