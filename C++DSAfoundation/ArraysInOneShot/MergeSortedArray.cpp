#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr1[] = {1, 6, 7, 10};
    int arr2[] = {0, 1, 3, 8, 11, 12, 15, 18};
    int m = 4;
    int n = 8;

    // code to merge two sorted arrays
    int result[m + n];
    int i = 0; // will help us to iterate on arr1
    int j = 0; // will help us to iterate on arr2
    int k = 0; // will help us to iterate on result

    while (i < m && j < n)
    {
        // both i and j should be within the limits of arr1 and arr2
        if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            result[k] = arr2[j];
            k++;
            j++;
        }
    }

    // display result after the first merging loop
    // for (int i = 0; i < k; i++)
    // {
    //     cout << result[i] << " ";
    // }
    // cout << endl;

    while (i < m)
    {
        // arr2 was exhausted and we still got elements left in arr1
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        // arr1 was exhausted and we still got elements left in arr2
        result[k] = arr2[j];
        k++;
        j++;
    }

    // display result
    for (int i = 0; i < (m + n); i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}

// Key Variables:
// arr1[] = {1, 6, 7, 10}

// arr2[] = {0, 1, 3, 8, 11, 12, 15, 18}

// m = 4 (length of arr1)

// n = 8 (length of arr2)

// result[] = Array to store the merged array.

// i, j, k are pointers for iterating through arr1[], arr2[], and result[] respectively.

// Step-by-Step Explanation:
// We will now visualize each iteration of the merging process, considering the current state of arr1[], arr2[], and result[].

// Initial Setup:
// arr1[] = {1, 6, 7, 10}

// arr2[] = {0, 1, 3, 8, 11, 12, 15, 18}

// m = 4, n = 8

// result[] = {} (empty array to store merged elements)

// i = 0, j = 0, k = 0

// Iteration 1:
// Compare arr1[i] and arr2[j]:

// arr1[i] = 1 and arr2[j] = 0

// Since arr1[i] > arr2[j], we place arr2[j] into result[k].

// Update:

// result[] = {0}

// Increment j → j = 1

// Increment k → k = 1

// Iteration 2:
// Compare arr1[i] and arr2[j]:

// arr1[i] = 1 and arr2[j] = 1

// Since arr1[i] <= arr2[j], we place arr1[i] into result[k].

// Update:

// result[] = {0, 1}

// Increment i → i = 1

// Increment k → k = 2

// Iteration 3:
// Compare arr1[i] and arr2[j]:

// arr1[i] = 6 and arr2[j] = 1

// Since arr1[i] > arr2[j], we place arr2[j] into result[k].

// Update:

// result[] = {0, 1, 1}

// Increment j → j = 2

// Increment k → k = 3

// Iteration 4:
// Compare arr1[i] and arr2[j]:

// arr1[i] = 6 and arr2[j] = 3

// Since arr1[i] > arr2[j], we place arr2[j] into result[k].

// Update:

// result[] = {0, 1, 1, 3}

// Increment j → j = 3

// Increment k → k = 4

// Iteration 5:
// Compare arr1[i] and arr2[j]:

// arr1[i] = 6 and arr2[j] = 8

// Since arr1[i] <= arr2[j], we place arr1[i] into result[k].

// Update:

// result[] = {0, 1, 1, 3, 6}

// Increment i → i = 2

// Increment k → k = 5

// Iteration 6:
// Compare arr1[i] and arr2[j]:

// arr1[i] = 7 and arr2[j] = 8

// Since arr1[i] <= arr2[j], we place arr1[i] into result[k].

// Update:

// result[] = {0, 1, 1, 3, 6, 7}

// Increment i → i = 3

// Increment k → k = 6

// Iteration 7:
// Compare arr1[i] and arr2[j]:

// arr1[i] = 10 and arr2[j] = 8

// Since arr1[i] > arr2[j], we place arr2[j] into result[k].

// Update:

// result[] = {0, 1, 1, 3, 6, 7, 8}

// Increment j → j = 4

// Increment k → k = 7

// Iteration 8:
// Compare arr1[i] and arr2[j]:

// arr1[i] = 10 and arr2[j] = 11

// Since arr1[i] <= arr2[j], we place arr1[i] into result[k].

// Update:

// result[] = {0, 1, 1, 3, 6, 7, 8, 10}

// Increment i → i = 4

// Increment k → k = 8

// At this point, i has reached m (i.e., i = 4), so the loop exits.

// These two while loops are used to handle the remaining elements in either arr1[] or arr2[] after the main merge loop is finished.

// 1. First While Loop (while (i < m))
// Purpose:
// This loop takes care of any remaining elements in arr1[] if all elements in arr2[] have been merged into result[]. If there are still elements left in arr1[] after the main while loop finishes, they need to be added to result[].

// Explanation:

// We check whether i < m. This condition checks if there are any remaining elements in arr1[].

// If there are remaining elements in arr1[], we simply copy them to result[].

// Step-by-Step Visualization:
// Let’s go over an example to visualize this behavior. Assume the following values:

// arr1[] = {1, 6, 7, 10}

// arr2[] = {0, 1, 3, 8, 11, 12, 15, 18}

// After the main merge loop is finished, let's assume the result[] has the following values (for simplicity):

// cpp
// Copy
// Edit
// result[] = {0, 1, 1, 3, 6, 7, 8, 10}
// At this point, all elements from arr2[] have been merged into result[], but arr1[] still has one element left: arr1[3] = 10.

// Now, since i = 4 (which is m), this means we have exhausted all elements from arr1[] in the main loop. But if there are still elements left in arr1[], we enter the while (i < m) loop.

// Iteration in the while (i < m) Loop:
// First Iteration:

// i = 3, arr1[i] = 10

// result[k] = arr1[3] = 10

// Increment i → i = 4

// Increment k → k = 8

// At this point, arr1[] is completely exhausted, and the loop finishes.

// After the while (i < m) loop, result[] becomes:
// cpp
// Copy
// Edit
// result[] = {0, 1, 1, 3, 6, 7, 8, 10, 10}
// 2. Second While Loop (while (j < n))
// Purpose:
// This loop handles any remaining elements in arr2[] after all elements from arr1[] have been merged. If there are still elements left in arr2[], they will be copied to result[] here.

// Explanation:

// We check whether j < n. This checks if there are any elements left in arr2[].

// If there are remaining elements in arr2[], they are copied into result[].

// Step-by-Step Visualization:
// After arr1[] is exhausted, we proceed to the while (j < n) loop.

// Let’s assume the current state is:

// result[] = {0, 1, 1, 3, 6, 7, 8, 10, 10}

// arr1[] is exhausted, but arr2[] still has elements left: {11, 12, 15, 18}.

// Iteration in the while (j < n) Loop:
// First Iteration:

// j = 4, arr2[j] = 11

// result[k] = arr2[4] = 11

// Increment j → j = 5

// Increment k → k = 9

// Second Iteration:

// j = 5, arr2[j] = 12

// result[k] = arr2[5] = 12

// Increment j → j = 6

// Increment k → k = 10

// Third Iteration:

// j = 6, arr2[j] = 15

// result[k] = arr2[6] = 15

// Increment j → j = 7

// Increment k → k = 11

// Fourth Iteration:

// j = 7, arr2[j] = 18

// result[k] = arr2[7] = 18

// Increment j → j = 8 (this exceeds n)

// Increment k → k = 12

// Now, all elements from both arr1[] and arr2[] have been copied to result[].

// After the while (j < n) loop, result[] becomes:
// cpp
// Copy
// Edit
// result[] = {0, 1, 1, 3, 6, 7, 8, 10, 10, 11, 12, 15, 18}
// Edge Cases:
// Case when arr1[] is exhausted first:

// Example: arr1[] = {1, 6, 7}, arr2[] = {0, 2, 3, 4, 5}

// After the main loop, arr1[] is exhausted, and we still have elements in arr2[].

// The while (i < m) loop will not run because arr1[] is empty, but the while (j < n) loop will copy all remaining elements from arr2[] into result[].

// Result after both loops:

// cpp
// Copy
// Edit
// result[] = {0, 1, 2, 3, 4, 5, 6, 7}
// Case when arr2[] is exhausted first:

// Example: arr1[] = {1, 3, 5, 7}, arr2[] = {0, 2}

// After the main loop, arr2[] is exhausted, and we still have elements in arr1[].

// The while (j < n) loop will not run because arr2[] is empty, but the while (i < m) loop will copy all remaining elements from arr1[] into result[].

// Result after both loops:

// cpp
// Copy
// Edit
// result[] = {0, 1, 2, 3, 5, 7}
// Case when both arrays are empty:

// If both arrays are empty, the merged result is also empty, and the loops won’t execute.

// cpp
// Copy
// Edit
// arr1[] = {};
// arr2[] = {};
// result[] = {};  // No output
// Time Complexity:
// The time complexity remains O(m + n) because the two while loops are only executed once for each element in the arrays arr1[] and arr2[]. So, the total time taken is proportional to the sum of the sizes of both arrays.
