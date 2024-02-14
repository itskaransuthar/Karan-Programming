/*
* Recursion: A function which calls itself again and again until a specific condition met is called recursion
*/

#include <iostream>
using namespace std;

void fun1(int);
void fun2(int);
void fun3(int);
void fun4(int);
void fun5(int);
void happyBirthday();

int main()
{
    int daysLeft = 5;
    // 5 days are left for the birthday 

    fun1(daysLeft);
}

void fun1(int days)
{
    cout << days << " days left for the birthday" << endl;
    fun2(days - 1);
}

void fun2(int days)
{
    cout << days << " days left for the birthday" << endl;
    fun3(days - 1);
}

void fun3(int days)
{
    cout << days << " days left for the birthday" << endl;
    fun4(days - 1);
}

void fun4(int days)
{
    cout << days << " days left for the birthday" << endl;
    fun5(days - 1);
}

void fun5(int days)
{
    cout << days << " days left for the birthday" << endl;
    happyBirthday();
}

void happyBirthday()
{
    cout << "Happy Birthday" << endl;
}