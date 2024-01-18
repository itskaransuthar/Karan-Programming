// Complement of Base 10 Integer

#include <iostream>
using namespace std;

class Solution {
private:
    // int result = 0, mul = 1;
public:
    int bitwiseComplement(int n) {
        int result = 0, mul = 1;

        if(n == 0)
            return 1;

        while(n)
        {
            result += ((n % 2) ^ 1) * mul;
            mul += mul; // mul = mul + mul; OR mul = mul * 2;
            n /= 2; 
        }

        /*
        while(n)
        {
            result += !(n & 1) * mul;
            mul = mul * 2;
            n >>= 1;
        }
        */

        return result;
    }
};

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    Solution obj;
    int answer = obj.bitwiseComplement(num);

    cout << "\nThe complement of number " << num << " in base 10 is " << answer;
}