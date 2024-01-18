// Leap Year

#include<bits/stdc++.h> 
using namespace std;

class Solution
{
public:
    int isLeap(int N)
    {
        //code here
        if(N % 400 == 0)
            return 1; // Leap Year
            
        else if(N % 4 == 0 && N % 100 != 0)
            return 1; // Leap Year
        
        else 
            return 0; // Normal Year
    }
}obj;

int main() 
{ 
    int year;
    cout << "Enter Year: ";
    cin >> year;

    // Solution obj;
    
    if(obj.isLeap(year))
        cout << "\nYear " << year << " is a leap year";
    else 
        cout << "\nYear " << year << " is not a leap year";

    return 0; 
}