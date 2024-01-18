// Bubble Sort

#include <bits/stdc++.h>
using namespace std;

void printArray(int *, int);
void bubbleSort(int *, int);

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

    bubbleSort(arr, n);

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

/// Ascending (आगे से bubble बनाना start किया ‍‌‍और बडे element को last मे लाके गये)
void bubbleSort(int *Arr, int n)
{
    for(int i = 1; i <= n - 1; i++) // Total n - 1 Passes
    {
        bool flag = true; // This means, we are assuming, array is sorted

        for(int j = 0; j <= n - (i + 1); j++)
            if(Arr[j + 1] < Arr[j])
            {
                swap(Arr[j + 1], Arr[j]);   
                flag = false; // This means, our assumption was wrong, array was unsorted
            }        

        if(flag == true) // This means, our assumption was right, array was sorted
            break;
    }
}

/*
/// Ascending (आखिर से bubble बनाना start किया ‍‌‍और छ‌ोटे element को starting मे लाके आये)
void bubbleSort(int *Arr, int n)
{
    for(int i = 1; i <= n - 1; i++) // Total n - 1 Passes
    {
        bool flag = true; // This means, we are assuming, array is sorted

        for(int j = n - 1; j >= i; j--)
            if(Arr[j - 1] > Arr[j])
            {
                swap(Arr[j - 1], Arr[j]);   
                flag = false; // This means, our assumption was wrong, array was unsorted
            }        

        if(flag == true) // This means, our assumption was right, array was sorted
            break;
    }
}
*/

/*
/// Descending (आगे से bubble बनाना start किया ‍‌‍और छ‌ोटे element को last मे लाके गये)
void bubbleSort(int *Arr, int n)
{
    for(int i = 1; i <= n - 1; i++) // Total n - 1 Passes
    {
        bool flag = true; // This means, we are assuming, array is sorted

        for(int j = 0; j <= n - (i + 1); j++)
            if(Arr[j + 1] > Arr[j])
            {
                swap(Arr[j + 1], Arr[j]);   
                flag = false; // This means, our assumption was wrong, array was unsorted
            }        

        if(flag == true) // This means, our assumption was right, array was sorted
            break;
    }
}
*/

/*
/// Descending (आखिर से bubble बनाना start किया ‍‌‍और बडे element को starting मे लाके आये)
void bubbleSort(int *Arr, int n)
{
    for(int i = 1; i <= n - 1; i++) // Total n - 1 Passes
    {
        bool flag = true; // This means, we are assuming, array is sorted

        for(int j = n - 1; j >= i; j--)
            if(Arr[j - 1] < Arr[j])
            {
                swap(Arr[j - 1], Arr[j]);   
                flag = false; // This means, our assumption was wrong, array was unsorted
            }        

        if(flag == true) // This means, our assumption was right, array was sorted
            break;
    }
}
*/