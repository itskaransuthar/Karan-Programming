// Bishop Moves

#include <iostream>
using namespace std;

int solve(int, int);

int main()
{
    int row, column;
    // Current Position of Bishop

    cout << "Enter row: ";
    cin >> row;

    cout << "Enter column: ";
    cin >> column;

    cout << "\nThe total number of squares that can be visited by the Bishop in one move: " << solve(row, column);
}

int solve(int A, int B) 
{
    int count = 0;
    
    count += min(A - 1, B - 1);
    count += min(A - 1, 8 - B);
    count += min(8 - A, B - 1);
    count += min(8 - A, 8 - B);
    
    return count;
}

/*
int solve(int A, int B) {
    int count = 0, row = A, column = B;
    
    while(row > 1 && column > 1)
    {
        row--;
        column--;
        
        count++;
    }
    
    row = A, column = B;
    
    while(row > 1 && column < 8)
    {
        row--; 
        column++;
        
        count++;
    }
    
    row = A, column = B;
    
    while(row < 8 && column > 1)
    {
        row++;
        column--;
        
        count++;
    }
    
    row = A, column = B;
    
    while(row < 8 && column < 8)
    {
        row++;
        column++;
        
        count++;
    }
    
    return count;
}
*/