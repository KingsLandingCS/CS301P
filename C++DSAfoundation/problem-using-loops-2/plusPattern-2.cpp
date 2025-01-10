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
            if (i == n / 2 || line == n / 2)
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



// Step-by-Step Execution:
// Iteration 1 of Outer Loop (line = 0):
// Processing the first row (line = 0).
// The inner loop runs for i = 0 to i = 4.
// Inner Loop for line = 0:
// i = 0:

// Condition: i == n / 2 || line == n / 2 → 0 == 2 || 0 == 2 → False || False → False.
// Print ' ' (space).
// i = 1:

// Condition: i == n / 2 || line == n / 2 → 1 == 2 || 0 == 2 → False || False → False.
// Print ' ' (space).
// i = 2:

// Condition: i == n / 2 || line == n / 2 → 2 == 2 || 0 == 2 → True || False → True.
// Print '*'.
// i = 3:

// Condition: i == n / 2 || line == n / 2 → 3 == 2 || 0 == 2 → False || False → False.
// Print ' ' (space).
// i = 4:

// Condition: i == n / 2 || line == n / 2 → 4 == 2 || 0 == 2 → False || False → False.
// Print ' ' (space).
// Row 0 Output: *

// Iteration 2 of Outer Loop (line = 1):
// Processing the second row (line = 1).
// The inner loop runs for i = 0 to i = 4.
// Inner Loop for line = 1:
// i = 0:

// Condition: i == n / 2 || line == n / 2 → 0 == 2 || 1 == 2 → False || False → False.
// Print ' ' (space).
// i = 1:

// Condition: i == n / 2 || line == n / 2 → 1 == 2 || 1 == 2 → False || False → False.
// Print ' ' (space).
// i = 2:

// Condition: i == n / 2 || line == n / 2 → 2 == 2 || 1 == 2 → True || False → True.
// Print '*'.
// i = 3:

// Condition: i == n / 2 || line == n / 2 → 3 == 2 || 1 == 2 → False || False → False.
// Print ' ' (space).
// i = 4:

// Condition: i == n / 2 || line == n / 2 → 4 == 2 || 1 == 2 → False || False → False.
// Print ' ' (space).
// Row 1 Output: *

// Iteration 3 of Outer Loop (line = 2):
// Processing the middle row (line = 2).
// The inner loop runs for i = 0 to i = 4.
// Inner Loop for line = 2:
// i = 0:

// Condition: i == n / 2 || line == n / 2 → 0 == 2 || 2 == 2 → False || True → True.
// Print '*'.
// i = 1:

// Condition: i == n / 2 || line == n / 2 → 1 == 2 || 2 == 2 → False || True → True.
// Print '*'.
// i = 2:

// Condition: i == n / 2 || line == n / 2 → 2 == 2 || 2 == 2 → True || True → True.
// Print '*'.
// i = 3:

// Condition: i == n / 2 || line == n / 2 → 3 == 2 || 2 == 2 → False || True → True.
// Print '*'.
// i = 4:

// Condition: i == n / 2 || line == n / 2 → 4 == 2 || 2 == 2 → False || True → True.
// Print '*'.
// Row 2 Output: *****

// Iteration 4 of Outer Loop (line = 3):
// Processing the fourth row (line = 3).
// The inner loop runs for i = 0 to i = 4.
// Inner Loop for line = 3:
// i = 0:

// Condition: i == n / 2 || line == n / 2 → 0 == 2 || 3 == 2 → False || False → False.
// Print ' ' (space).
// i = 1:

// Condition: i == n / 2 || line == n / 2 → 1 == 2 || 3 == 2 → False || False → False.
// Print ' ' (space).
// i = 2:

// Condition: i == n / 2 || line == n / 2 → 2 == 2 || 3 == 2 → True || False → True.
// Print '*'.
// i = 3:

// Condition: i == n / 2 || line == n / 2 → 3 == 2 || 3 == 2 → False || False → False.
// Print ' ' (space).
// i = 4:

// Condition: i == n / 2 || line == n / 2 → 4 == 2 || 3 == 2 → False || False → False.
// Print ' ' (space).
// Row 3 Output: *

// Iteration 5 of Outer Loop (line = 4):
// Processing the fifth row (line = 4).
// The inner loop runs for i = 0 to i = 4.
// Inner Loop for line = 4:
// i = 0:

// Condition: i == n / 2 || line == n / 2 → 0 == 2 || 4 == 2 → False || False → False.
// Print ' ' (space).
// i = 1:

// Condition: i == n / 2 || line == n / 2 → 1 == 2 || 4 == 2 → False || False → False.
// Print ' ' (space).
// i = 2:

// Condition: i == n / 2 || line == n / 2 → 2 == 2 || 4 == 2 → True || False → True.
// Print '*'.
// i = 3:

// Condition: i == n / 2 || line == n / 2 → 3 == 2 || 4 == 2 → False || False → False.
// Print ' ' (space).
// i = 4:

// Condition: i == n / 2 || line == n / 2 → 4 == 2 || 4 == 2 → False || False → False.
// Print ' ' (space).
// Row 4 Output: *

// Final Output:
// The grid printed row by row:

// markdown
// Copy code
//   *
//   *
// *****
//   *
//   *
// The execution is identical to the original program but with combined conditions in one if statement.