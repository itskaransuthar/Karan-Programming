// Convert 'a' to 'A' and vice versa

#include <iostream>
using namespace std;

char convertToUppercase(char);
char convertToLowercase(char);

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Input is small alphabet
    if(ch >= 97 && ch <= 97 + 25)
        cout << endl << ch << " -> " << convertToUppercase(ch);

    // Input is capital alphabet
    else if(ch >= 65 && ch <= 65 + 25)
        cout << endl << ch << " -> " << convertToLowercase(ch);

    else 
        cout << "\nEnter valid alphabet";
}

char convertToUppercase(char ch)
{
    return ch - ('a' - 'A');
}

char convertToLowercase(char ch)
{
    return ch + ('a' - 'A');
}