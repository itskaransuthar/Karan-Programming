// Reverse array

#include <iostream>
using namespace std;

class Solution
{
    public: 
        void reverseArray(int *A, int N)
        {
            int i = 0, j = N - 1;
            while(i < j)
            {
                swap(A[i++], A[j--]);
                
                /*
                int temp = A[i];
                A[i++] = A[j];
                A[j--] = temp;
                */
            }
        }

        void printArray(int *A, int N)
        {
            for(int i = 0; i < N; i++)
            {
                cout << A[i] << " ";
            }
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
    obj.reverseArray(Arr, n);

    cout << "\nPrinting Array: ";
    obj.printArray(Arr, n);
}