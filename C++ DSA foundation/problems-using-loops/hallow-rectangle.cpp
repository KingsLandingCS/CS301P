#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || j == 1 || i == row || j == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}



// Step 2: Outer loop (go through rows)
// cpp
// Copy code
// for (int i = 1; i <= row; i++)
// This loop runs once for each row of the rectangle.
// Example: If row = 4, the outer loop runs 4 times:
// i = 1 (First row).
// i = 2 (Second row).
// i = 3 (Third row).
// i = 4 (Fourth row).
// Step 3: Inner loop (go through columns in each row)
// cpp
// Copy code
// for (int j = 1; j <= col; j++)
// For every row, this loop runs once for each column in that row.
// Example: If col = 5, the inner loop runs 5 times in each row:
// j = 1, j = 2, j = 3, j = 4, j = 5.
// Step 4: Decide what to print
// cpp
// Copy code
// if (i == 1 || j == 1 || i == row || j == col)
// This part decides if the current position should have a * or a space ( ):
// i == 1 → First row (top of the rectangle).
// j == 1 → First column (left edge of the rectangle).
// i == row → Last row (bottom of the rectangle).
// j == col → Last column (right edge of the rectangle).
// If any of these conditions is true, it prints a *.
// Otherwise, it prints a space ( ).
// Step 5: Move to the next row
// cpp
// Copy code
// cout << endl;
// After finishing all the columns in one row, this moves to the next line to start printing the next row.
// Example Execution
// Input:
// Copy code
// 4 5
// row = 4, col = 5
// Step-by-step Execution:
// First row (i = 1):

// Condition: i == 1 → All positions in the first row are *.
// Output: *****
// Second row (i = 2):

// Column by column:
// j = 1: j == 1 → *.
// j = 2: No condition matches → Space.
// j = 3: No condition matches → Space.
// j = 4: No condition matches → Space.
// j = 5: j == col → *.
// Output: * *
// Third row (i = 3):

// Same as the second row.
// Output: * *
// Fourth row (i = 4):

// Condition: i == row → All positions in the last row are *.
// Output: *****
// Final Output:
// markdown
// Copy code
// *****
// *   *
// *   *
// *****
// Summary of Loops
// Outer loop (i) handles the rows.
// Inner loop (j) handles the columns in each row.
// Conditions decide whether to print a * (for the boundary) or a space ( ) for the hollow area inside.