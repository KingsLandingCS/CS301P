#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    // for loop to do some task for each line
    for (int line = 0; line < n; line++)
    {
        // spaces for the current line
        for (int i = 0; i < n; i++)
        {
            if (i == n / 2)
            {
                cout << "*";
            }
            else if (line == n / 2)
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



// Outer Loop: for (int line = 0; line < n; line++)
// Outer loop variable line controls the current row number. It will iterate from 0 to 4 (inclusive) since n = 5.
// Iteration 1 of Outer Loop (line = 0):
// Now processing row 0.
// Enter the inner loop to handle each column of this row.
// Inner Loop for line = 0: for (int i = 0; i < n; i++)
// i = 0:
// i == n / 2 → 0 == 2 → False.
// line == n / 2 → 0 == 2 → False.
// Print ' ' (a space).
// i = 1:
// i == n / 2 → 1 == 2 → False.
// line == n / 2 → 0 == 2 → False.
// Print ' ' (a space).
// i = 2:
// i == n / 2 → 2 == 2 → True.
// Print '*'.
// i = 3:
// i == n / 2 → 3 == 2 → False.
// line == n / 2 → 0 == 2 → False.
// Print ' ' (a space).
// i = 4:
// i == n / 2 → 4 == 2 → False.
// line == n / 2 → 0 == 2 → False.
// Print ' ' (a space).
// Row 0 Output: *

// Iteration 2 of Outer Loop (line = 1):
// Now processing row 1.
// Enter the inner loop to handle each column of this row.
// Inner Loop for line = 1: for (int i = 0; i < n; i++)
// i = 0:
// i == n / 2 → 0 == 2 → False.
// line == n / 2 → 1 == 2 → False.
// Print ' ' (a space).
// i = 1:
// i == n / 2 → 1 == 2 → False.
// line == n / 2 → 1 == 2 → False.
// Print ' ' (a space).
// i = 2:
// i == n / 2 → 2 == 2 → True.
// Print '*'.
// i = 3:
// i == n / 2 → 3 == 2 → False.
// line == n / 2 → 1 == 2 → False.
// Print ' ' (a space).
// i = 4:
// i == n / 2 → 4 == 2 → False.
// line == n / 2 → 1 == 2 → False.
// Print ' ' (a space).
// Row 1 Output: *

// Iteration 3 of Outer Loop (line = 2):
// Now processing row 2 (middle row).
// Enter the inner loop to handle each column of this row.
// Inner Loop for line = 2: for (int i = 0; i < n; i++)
// i = 0:
// i == n / 2 → 0 == 2 → False.
// line == n / 2 → 2 == 2 → True.
// Print '*'.
// i = 1:
// i == n / 2 → 1 == 2 → False.
// line == n / 2 → 2 == 2 → True.
// Print '*'.
// i = 2:
// i == n / 2 → 2 == 2 → True.
// line == n / 2 → 2 == 2 → True.
// Print '*'.
// i = 3:
// i == n / 2 → 3 == 2 → False.
// line == n / 2 → 2 == 2 → True.
// Print '*'.
// i = 4:
// i == n / 2 → 4 == 2 → False.
// line == n / 2 → 2 == 2 → True.
// Print '*'.
// Row 2 Output: *****

// Iteration 4 of Outer Loop (line = 3):
// Now processing row 3.
// Enter the inner loop to handle each column of this row.
// Inner Loop for line = 3: for (int i = 0; i < n; i++)
// i = 0:
// i == n / 2 → 0 == 2 → False.
// line == n / 2 → 3 == 2 → False.
// Print ' ' (a space).
// i = 1:
// i == n / 2 → 1 == 2 → False.
// line == n / 2 → 3 == 2 → False.
// Print ' ' (a space).
// i = 2:
// i == n / 2 → 2 == 2 → True.
// Print '*'.
// i = 3:
// i == n / 2 → 3 == 2 → False.
// line == n / 2 → 3 == 2 → False.
// Print ' ' (a space).
// i = 4:
// i == n / 2 → 4 == 2 → False.
// line == n / 2 → 3 == 2 → False.
// Print ' ' (a space).
// Row 3 Output: *

// Iteration 5 of Outer Loop (line = 4):
// Now processing row 4 (last row).
// Enter the inner loop to handle each column of this row.
// Inner Loop for line = 4: for (int i = 0; i < n; i++)
// i = 0:
// i == n / 2 → 0 == 2 → False.
// line == n / 2 → 4 == 2 → False.
// Print ' ' (a space).
// i = 1:
// i == n / 2 → 1 == 2 → False.
// line == n / 2 → 4 == 2 → False.
// Print ' ' (a space).
// i = 2:
// i == n / 2 → 2 == 2 → True.
// Print '*'.
// i = 3:
// i == n / 2 → 3 == 2 → False.
// line == n / 2 → 4 == 2 → False.
// Print ' ' (a space).
// i = 4:
// i == n / 2 → 4 == 2 → False.
// line == n / 2 → 4 == 2 → False.
// Print ' ' (a space).
// Row 4 Output: *

// Final Output:
// After processing all rows, the complete grid is:

// markdown
// Copy code
//   *
//   *
// *****
//   *
//   *