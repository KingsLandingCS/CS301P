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

// No, you cannot use && (AND operator) instead of || (OR operator) in this condition. Here's why:

// What Does || (OR) Do?
// The condition:

// cpp
// Copy code
// if (i == 1 || j == 1 || i == row || j == col)
// means any one of these conditions being true is enough to print *. Specifically:

// i == 1 → If the current row is the first row, print *.
// j == 1 → If the current column is the first column, print *.
// i == row → If the current row is the last row, print *.
// j == col → If the current column is the last column, print *.
// Using || ensures the rectangle's boundary is filled with stars (*), as at least one of these conditions will hold true for boundary positions.

// What Happens If We Use && (AND)?
// The condition:

// cpp
// Copy code
// if (i == 1 && j == 1 && i == row && j == col)
// means all of these conditions must be true simultaneously for * to be printed.

// This creates a problem:

// For example:
// i == 1 && j == 1: True only for the top-left corner.
// i == row && j == col: True only for the bottom-right corner.
// It is impossible for i to be both 1 and row (the first and last row) or j to be both 1 and col (the first and last column) at the same time.
// Thus, no cell satisfies all conditions, and the rectangle will not print correctly.
// Result with &&:
// If you replace || with &&, you’ll get an empty output because no position meets all the conditions at the same time.

// Correct Use of ||:
// The || operator ensures that any position on the boundary satisfies at least one of the conditions and gets printed as a *.

// Key Takeaway:
// Use || (OR) when any one of multiple conditions should be true. Use && (AND) only when all conditions must be true at the same time. In this case, the boundary requires || because different parts of the boundary satisfy different conditions.