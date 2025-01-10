#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


// First, Let's Analyze How Printing Works in C++
// When we use cout in C++, it writes characters in the order they are executed.

// If you print spaces first in the first loop, those spaces occupy positions on the line.
// When you print a * in the second loop, it will appear immediately after the last space.
// Code Flow for Row 1 (i = 1)
// Spaces Loop (for (int j = 1; j <= (n - i); j++)):

// n = 5, i = 1, so (n - i) = 4.
// The loop runs 4 times and prints 4 spaces:
// c
// Copy code
// cout << " ";
// After this loop, the cursor is at position 5 on the current line.
// Stars Loop (for (int j = 1; j <= (2 * i - 1); j++)):

// (2 * i - 1) = (2 * 1 - 1) = 1.
// The loop runs 1 time and prints a *:
// c
// Copy code
// cout << "*";
// Since the cursor was at position 5 after the spaces, the * is printed in the 5th position.
// Why Does j = 1 Print at Position 5?
// The value of j in the second loop does not directly correspond to the cursor position on the line. The cursor's position is determined by:

// What has already been printed (in this case, the 4 spaces from the first loop).
// The order in which cout is executed.
// Cursor Movement in Row 1
// Let's simulate how the cursor moves during Row 1:

// Action	Output So Far	Cursor Position
// Print 1st space		2
// Print 2nd space		3
// Print 3rd space		4
// Print 4th space		5
// Print 1st star (*)	*	6
// The * is printed at position 5 because the cursor was at position 5 after the spaces.

// Recap
// Spaces loop moves the cursor to the right by printing spaces.
// Stars loop starts where the cursor left off and prints stars.
// j = 1 in the second loop does not mean "column 1"; it simply means it’s the first iteration of the second loop.
