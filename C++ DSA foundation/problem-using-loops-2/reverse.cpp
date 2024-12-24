#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int reverse = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;  // Extract the Last Digit
        reverse = reverse * 10 + lastDigit; // Update the Reversed Number
        n /= 10; // Remove the Last Digit from n
    }

    cout << reverse << endl;

    return 0;
}

// Detailed Walkthrough
// Let’s say you input 1234 as
// 𝑛
// n.

// Step 1: Initialize Variables
// You input
// 𝑛
// =
// 1234
// n=1234.
// reverse is initialized to 0.
// Step 2: Loop Starts
// The while (n > 0) loop begins. It continues until
// 𝑛
// n becomes 0.

// Iteration 1 (n = 1234):
// Extract the Last Digit:
// lastDigit = n % 10 = 1234 % 10 = 4.
// (The remainder of dividing 1234 by 10 is the last digit, 4.)

// Update the Reversed Number:
// reverse = reverse * 10 + lastDigit = 0 * 10 + 4 = 4.

// Remove the Last Digit from n:
// n = n / 10 = 1234 / 10 = 123.
// (Integer division removes the last digit.)

// Iteration 2 (n = 123):
// Extract the Last Digit:
// lastDigit = n % 10 = 123 % 10 = 3.
// (The remainder of dividing 123 by 10 is 3.)

// Update the Reversed Number:
// reverse = reverse * 10 + lastDigit = 4 * 10 + 3 = 43.

// Remove the Last Digit from n:
// n = n / 10 = 123 / 10 = 12.

// Iteration 3 (n = 12):
// Extract the Last Digit:
// lastDigit = n % 10 = 12 % 10 = 2.

// Update the Reversed Number:
// reverse = reverse * 10 + lastDigit = 43 * 10 + 2 = 432.

// Remove the Last Digit from n:
// n = n / 10 = 12 / 10 = 1.

// Iteration 4 (n = 1):
// Extract the Last Digit:
// lastDigit = n % 10 = 1 % 10 = 1.

// Update the Reversed Number:
// reverse = reverse * 10 + lastDigit = 432 * 10 + 1 = 4321.

// Remove the Last Digit from n:
// n = n / 10 = 1 / 10 = 0.

// Step 3: Exit the Loop
// The loop ends because
// 𝑛
// =
// 0
// n=0.

// Step 4: Output the Result
// Finally, cout << reverse prints 4321.

// Execution Visualization in the Terminal
// Iteration	n	lastDigit	reverse Calculation	New reverse	n after Division
