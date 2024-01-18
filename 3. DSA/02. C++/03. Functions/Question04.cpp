// Power of Two

#include <iostream>
using namespace std;

class Solution 
{
public:
    bool isPowerOfTwo(int n)
    {
        // Non-Positive can't be a power of +2
        if (n < 1)
            return 0;

        // Positive numbers may be a power of +2
        while(n != 1)
        {
            if(n % 2)
                return 0;

            n /= 2;
        }

        return 1;
    }
}obj;

int main()
{   
    int num;
    cout << "Enter num: ";
    cin >> num;

    // Solution obj;
    if(obj.isPowerOfTwo(num))
        cout << "\nNumber " << num << " is a power of +2";
    else
        cout << "\nNumber " << num << " is not a power of +2";
}