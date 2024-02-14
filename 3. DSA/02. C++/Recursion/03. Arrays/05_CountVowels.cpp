#include <iostream>
using namespace std;

int countVowels (string str, int index, int count)
{
    // Base Condition
    if(index == str.length())
        return count;

    // Recursion
    if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
    {
        count++;
    }

    return countVowels(str, index + 1, count);
}

int main()
{
    string str = "Karan Suthar";

    cout << "Total numbers of vowels in string " << str << " is: " << countVowels(str, 0, 0) << endl;
}