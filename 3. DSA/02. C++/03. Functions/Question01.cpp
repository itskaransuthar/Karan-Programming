// Add Digits

#include <iostream>
using namespace std;

int addDigits(int);

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int answer = addDigits(num);
    cout << "\nSum of digits: " << answer << endl;
}

int addDigits(int num) 
{
        int result = 0;

        while(num)
        {
            result = result + num % 10;
            num /= 10;

            if(num == 0 && result >= 10)
            {
                num = result;
                result = 0;
            }
        }

        return result;
    }