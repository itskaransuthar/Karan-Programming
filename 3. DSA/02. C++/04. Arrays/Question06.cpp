// Cyclic Rotate

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int *Arr = new int(n);
    // int *Arr = (int *) malloc (n * sizeof(int));

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    rotate(Arr, n);

    cout << "Printing array: ";
    printArray(Arr, n);

    return 0;
}

void rotate(int arr[], int n)
{
    int temp;
    
    temp = arr[n - 1];
    
    for(int i = 1; i < n; i++)
        arr[n - i] = arr[n - (i + 1)];
    
    arr[0] = temp;
}

void printArray(int *Arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
}