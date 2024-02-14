/*
* Recursion: A function which calls itself again and again until a specific condition met is called recursion
*/

#include <iostream>
using namespace std;

void happyBirthday(int daysLeft)
{
    if(daysLeft == 0)
    {
        cout << "Happy Birthday!" << endl;
        return;
    }

    cout << daysLeft << " days left for the birthday" << endl;
    happyBirthday(daysLeft - 1);
}

int main()
{
    int daysLeft = 25;
    // 25 days are left for the birthday 

    happyBirthday(daysLeft);
}