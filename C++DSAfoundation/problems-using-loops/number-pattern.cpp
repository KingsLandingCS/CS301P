#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

// Input and Outer Loop
// Input:

// The program reads an integer n. This determines the number of rows in the pattern.
// Outer Loop (for (int i = 1; i <= n; i++)):

// The outer loop controls the rows of the pattern.
// For each iteration of i, the program generates a row of the pattern.
// Inner Loops (Columns)
// First Inner Loop (for (int j = i; j <= n; j++))
// This loop prints numbers starting from j = i up to j = n.
// These numbers form the first part of the row.
// Example: If n = 5 and i = 2, the loop will print:
// makefile
// Copy code
// j = 2, 3, 4, 5
// Second Inner Loop (for (int j = 1; j <= (i - 1); j++))
// This loop prints numbers starting from j = 1 up to j = (i - 1).
// These numbers form the second part of the row.
// Example: If n = 5 and i = 3, the loop will print:
// makefile
// Copy code
// j = 1, 2
// Combining the Loops
// Each row combines the outputs of the two inner loops:

// First Inner Loop: Numbers from i to n.
// Second Inner Loop: Numbers from 1 to (i - 1).
// After printing all the numbers for a row, cout << endl; moves the cursor to the next row.

// Step-by-Step Execution
// Input: n = 5
// Row 1 (i = 1):

// First Inner Loop: j = 1, 2, 3, 4, 5 → Output: 12345
// Second Inner Loop: None (i - 1 = 0)
// Final Output: 12345
// Row 2 (i = 2):

// First Inner Loop: j = 2, 3, 4, 5 → Output: 2345
// Second Inner Loop: j = 1 → Output: 1
// Final Output: 23451
// Row 3 (i = 3):

// First Inner Loop: j = 3, 4, 5 → Output: 345
// Second Inner Loop: j = 1, 2 → Output: 12
// Final Output: 34512
// Row 4 (i = 4):

// First Inner Loop: j = 4, 5 → Output: 45
// Second Inner Loop: j = 1, 2, 3 → Output: 123
// Final Output: 45123
// Row 5 (i = 5):

// First Inner Loop: j = 5 → Output: 5
// Second Inner Loop: j = 1, 2, 3, 4 → Output: 1234
// Final Output: 51234
// Final Output
// If n = 5, the full pattern is:

// Copy code
// 12345
// 23451
// 34512
// 45123
// 51234
// Why It Works
// The first inner loop shifts the starting number to the current row index i and goes up to n.
// The second inner loop wraps around to print numbers starting from 1 up to (i - 1), completing the circular effect.