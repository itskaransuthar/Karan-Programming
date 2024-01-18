// Rectangle

#include <iostream> 
using namespace std;

int solve(int, int, int, int);

int main()
{
    int length1, length2, length3, length4;

    cout << "Enter four lengths: ";
    cin >> length1 >> length2 >> length3 >> length4;

    if(solve(length1, length2, length3, length4))
        cout << "\nRectangle";
    else 
        cout << "\nNot Rectangle";
}

int solve(int A, int B, int C, int D) 
{
    if((A == B && C == D) || (A == C && B == D) || (A == D && B == C))
        return 1;
        
    else
        return 0;
}