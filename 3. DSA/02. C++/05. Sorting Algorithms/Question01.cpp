// Selection Sort

#include <bits/stdc++.h>
using namespace std;

void printArray(int *, int);
void selectionSort(int *, int);

/*
Time Complexity: 
    1. Worst Case = O(n²)
    2. Best Case = Ω(n²)
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

    selectionSort(arr, n);

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

/// Ascending (छोटे element को आगे लाके sort किया)
void selectionSort(int *Arr, int n)
{
    for(int i = 0; i <= n - 2; i++)
    {
        int index = i; // Array मे Minimum element का index

        for(int j = i + 1; j <= n - 1; j++)
            if(Arr[j] < Arr[index])
                index = j;

        swap(Arr[i], Arr[index]);
    }
}

/*
/// Ascending (बडे element को पिछे लाके sort किया)
void selectionSort(int *Arr, int n)
{
    for(int i = n - 1; i >= 1; i--)
    {
        int index = i; // Array मे Maximum element का index

        for(int j = 0; j <= i - 1; j++)
            if(Arr[j] > Arr[index])
                index = j;

        swap(Arr[i], Arr[index]);
    }
}
*/

/*
/// Descending (बडे element को आगे लाके sort किया)
void selectionSort(int *Arr, int n)
{
    for(int i = 0; i <= n - 2; i++)
    {
        int index = i; // Array मे Maximum element का index

        for(int j = i + 1; j <= n - 1; j++)
            if(Arr[j] > Arr[index])
                index = j;

        swap(Arr[i], Arr[index]);
    }
}
*/

/*
/// Descending (छोटे element को पिछे लाके sort किया)
void selectionSort(int *Arr, int n)
{
    for(int i = n - 1; i >= 1; i--)
    {
        int index = i; // Array मे Minimum element का index

        for(int j = 0; j <= i - 1; j++)
            if(Arr[j] < Arr[index])
                index = j;

        swap(Arr[i], Arr[index]);
    }
}
*/