#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    // k can be greater than n

    k = k % n;
    int ansArr[5]; // This declares an array named ansArr of size 5. The number 5 represents the number of elements the array can hold.
    int j = 0;

    for (int i = n - k; i < n; i++)
    {
        ansArr[j++] = arr[i];
    }

    // inserting last k elements in ans Arr
    for (int i = 0; i <= k; i++)
    {
        ansArr[j++] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ansArr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Step 1: Initializing Variables
// cpp
// Copy
// Edit
// int arr[] = {1, 2, 3, 4, 5};
// int n = 5;
// int k = 2;
// We define an array arr of size n = 5.
// We want to rotate it k = 2 times to the right.

// Step 2: Handling Large k Values
// cpp
// Copy
// Edit
// k = k % n;
// This ensures that if k is greater than n, we don't do unnecessary rotations.
// Since k = 2 and n = 5, 2 % 5 = 2, so k remains 2.

// Let's rotate the array 8 times step by step and see what happens.

// Given Array:
// makefile
// Copy
// Edit
// Index:    0   1   2   3   4
// Array:    1   2   3   4   5
// Right Rotations:
// Rotation #	New Array after Rotation
// 1	5 1 2 3 4
// 2	4 5 1 2 3
// 3	3 4 5 1 2
// 4	2 3 4 5 1
// 5	1 2 3 4 5 (Back to original)
// 6	5 1 2 3 4
// 7	4 5 1 2 3
// 8	3 4 5 1 2
// Observation
// After 5 rotations, the array returns to its original form.
// Rotating 8 times is the same as rotating only 8 % 5 = 3 times.
// Final result after 8 rotations is the same as after 3 rotations:
// Copy
// Edit
// 3 4 5 1 2
// Key Takeaway
// 💡 Instead of performing unnecessary rotations, we use k = k % n to reduce extra work. Rotating 8 times gives the same result as rotating 3 times (8 % 5 = 3).

// Would you like to visualize this with a diagram? 😊

// Step 3: Creating an Answer Array
// cpp
// Copy
// Edit
// int ansArr[5];
// int j = 0;
// We define ansArr[5] to store the rotated array.
// j = 0 keeps track of the index while filling ansArr.
// Step 4: Moving the Last k Elements to the Front
// cpp
// Copy
// Edit
// for (int i = n - k; i < n; i++)
// {
//     ansArr[j++] = arr[i];
// }
// n - k = 5 - 2 = 3, so i starts from index 3 (arr[3] = 4).
// This loop runs from index 3 to 4 (arr[3] to arr[4]).
// Step-by-step Execution of the Loop
// i	arr[i]	ansArr[j++]
// 3	4	ansArr[0] = 4
// 4	5	ansArr[1] = 5
// j was 0, so ansArr[0] = arr[3] = 4.
// j was incremented, so ansArr[1] = arr[4] = 5.
// At this point, ansArr = {4, 5, _, _, _} and j = 2.

// Step 5: Moving the Remaining Elements
// cpp
// Copy
// Edit
// for (int i = 0; i <= k; i++)
// {
//     ansArr[j++] = arr[i];
// }
// This loop runs from index 0 to 2 (arr[0] to arr[2]).
// Step-by-step Execution of the Loop
// i	arr[i]	ansArr[j++]
// 0	1	ansArr[2] = 1
// 1	2	ansArr[3] = 2
// 2	3	ansArr[4] = 3
// ansArr[2] = arr[0] = 1
// ansArr[3] = arr[1] = 2
// ansArr[4] = arr[2] = 3
// At this point, ansArr = {4, 5, 1, 2, 3}.

// Step 6: Printing the Result
// cpp
// Copy
// Edit
// for (int i = 0; i < n; i++)
// {
//     cout << ansArr[i] << " ";
// }
// This prints the rotated array:
// 4 5 1 2 3
// Summary of Key Parts
// First loop: Moves the last k elements to the beginning.

// cpp
// Copy
// Edit
// ansArr[j++] = arr[i];
// j++ means store the value at j, then increase j by 1.
// First stores at ansArr[0], then ansArr[1], etc.
// Second loop: Moves the remaining elements after the shifted part.

// cpp
// Copy
// Edit
// ansArr[j++] = arr[i];
// Again, j++ makes sure elements are placed sequentially.
// Final Visualization
// Before Rotation
// makefile
// Copy
// Edit
// Index:    0   1   2   3   4
// Array:    1   2   3   4   5
// After 2 Rotations (Right)
// makefile
// Copy
// Edit
// Index:    0   1   2   3   4
// Array:    4   5   1   2   3
// 💡 Key Takeaways

// j++ ensures values are placed in order.
// First loop moves the last k elements first.
// Second loop moves the rest of the elements.
// The final output correctly rotates the array.
// Does this make sense now? 😊