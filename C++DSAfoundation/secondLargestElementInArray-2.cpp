#include <iostream>
#include <climits>
using namespace std;

int largestElementIndex(int arr[], int size)
{
    int max = INT_MIN;
    int maxIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main()
{

    int arr[] = {2, 3, 5, 7, 6, 1, 7};
    int n = 7;
    int indexOfLargestElement = largestElementIndex(arr, n);

    // array before mutation
    cout << "Index of Largest Elemenet before mutation: " << arr[indexOfLargestElement] << endl;
    // arr[indexOfLargestElement] = -1;
    int largestElement = arr[indexOfLargestElement];

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == largestElement)
        {
            arr[i] = -1;
        }
    }

    // array after mutation
    cout << "Index of Largest Element after mutation: " << arr[indexOfLargestElement] << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // finding the second largest element
    int secondLargestElement = largestElementIndex(arr, n);
    cout << "Second Largest Element: " << arr[secondLargestElement] << endl;

    // visualizing the the array in the process of the finding second largest element.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Reason for Initializing maxIndex at -1
// The reason for initializing maxIndex at -1 is to ensure that:

// Indicating No Valid Index Initially:

// Initially, before the loop starts, we don't know any valid index where the largest element might be. By setting maxIndex = -1, we indicate that no index has been found yet. This is particularly useful to catch cases where the array might be empty or invalid.
// It Acts as a Placeholder:

// If no element is larger than max, we would still return -1. Although, in this specific case, the array is guaranteed to have elements, so the initialization of -1 mainly serves as a placeholder for an "invalid" index. It ensures that if the loop doesn't update maxIndex (which shouldn't happen with a non-empty array), we can detect such an issue.
// Detailed Walkthrough
// Before entering the loop, maxIndex = -1. It signals that we have yet to find the largest element.

// During the loop, as we find a larger element, we update both max and maxIndex.

// After the loop, maxIndex holds the index of the largest element in the array. If maxIndex is still -1, it would suggest that there was an issue (like an empty array, which isn't the case here).

// Alternative Initialization
// You could theoretically initialize maxIndex to 0 (the first index of the array). However, by setting it to -1, you cover edge cases like:

// An empty array (though in your example, it’s not relevant).
// Keeping the code more robust when expanding or modifying the logic.
// To Summarize:
// maxIndex = -1 is a safe initialization that helps track if the index is updated during the loop and also provides a way to handle edge cases like an empty array.
// It's not strictly necessary here but is a good practice to ensure proper handling and debugging.

// Purpose of the Program
// The program is designed to find the second largest element in an array. Here's how it works:

// Find the largest element in the array.
// Remove the largest element (by setting it to -1).
// Find the largest element again (which is now the second largest element in the modified array).
// Code Explanation
// 1. The largestElementIndex Function
// cpp
// Copy
// Edit
// int largestElementIndex(int arr[], int size)
// {
//     int max = INT_MIN;  // Initialize max to the smallest possible integer
//     int maxIndex = -1;  // Initialize maxIndex to -1 (invalid index)

//     // Loop through the entire array to find the largest element
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max)  // If the current element is larger than the current max
//         {
//             max = arr[i];     // Update the max value
//             maxIndex = i;     // Update the index of the largest element
//         }
//     }
//     return maxIndex;  // Return the index of the largest element
// }
// Explanation of the largestElementIndex function:

// This function accepts an array arr[] and its size as inputs.
// The max variable is initialized to INT_MIN, which ensures that the first element of the array will be larger than this value and thus become the initial maximum.
// maxIndex keeps track of the index of the largest element.
// The function loops through the array, and whenever a larger element is found, it updates both max and maxIndex.
// Finally, the function returns the index of the largest element.
// 2. The main Function
// cpp
// Copy
// Edit
// int main()
// {
//     int arr[] = {2, 3, 5, 7, 6, 1};  // Array of integers
//     int indexOfLargestElement = largestElementIndex(arr, 6);  // Find the index of the largest element

//     arr[indexOfLargestElement] = -1;  // Replace the largest element with -1

//     int indexOfSecondLargestElement = largestElementIndex(arr, 6);  // Find the largest element again (now second largest)

//     cout << arr[indexOfSecondLargestElement] << endl;  // Print the second largest element

//     return 0;
// }
// Explanation of the main function:

// The array arr[] = {2, 3, 5, 7, 6, 1} is initialized.
// The function largestElementIndex(arr, 6) is called, which returns the index of the largest element in the array. In this case, the largest element is 7 at index 3.
// Output: indexOfLargestElement = 3
// After finding the largest element, it's replaced by -1 (so arr[3] = -1), making the array:
// ini
// Copy
// Edit
// arr = {2, 3, 5, -1, 6, 1}
// Next, the function largestElementIndex(arr, 6) is called again. Now, the largest element in the modified array is 6, which is at index 4.
// Output: indexOfSecondLargestElement = 4
// Finally, the second largest element arr[4] = 6 is printed using cout.
// Step-by-Step Walkthrough
// First Call to largestElementIndex:

// The function goes through the array {2, 3, 5, 7, 6, 1}.
// In the first iteration, it finds 2 and updates max = 2 and maxIndex = 0.
// In the second iteration, it finds 3 and updates max = 3 and maxIndex = 1.
// In the third iteration, it finds 5 and updates max = 5 and maxIndex = 2.
// In the fourth iteration, it finds 7 and updates max = 7 and maxIndex = 3 (since 7 is the largest).
// The loop continues but does not update max anymore since no element is larger than 7.
// The function returns 3 as the index of the largest element.
// Replacing the Largest Element:

// cpp
// Copy
// Edit
// arr[indexOfLargestElement] = -1;
// After the first call, indexOfLargestElement is 3, so arr[3] = -1 is executed, modifying the array to:
// ini
// Copy
// Edit
// arr = {2, 3, 5, -1, 6, 1}
// Second Call to largestElementIndex:

// The function is called again with the modified array {2, 3, 5, -1, 6, 1}.
// The function goes through the array:
// It finds 2 and updates max = 2 and maxIndex = 0.
// It finds 3 and updates max = 3 and maxIndex = 1.
// It finds 5 and updates max = 5 and maxIndex = 2.
// It finds -1 but does not update max.
// It finds 6 and updates max = 6 and maxIndex = 4 (now 6 is the largest).
// It finds 1 but does not update max.
// The function returns 4 as the index of the second largest element (which is now 6 after replacing 7).
// Printing the Second Largest Element:

// cpp
// Copy
// Edit
// cout << arr[indexOfSecondLargestElement] << endl;
// Finally, arr[indexOfSecondLargestElement] = arr[4] = 6 is printed.
// Final Output
// The program will output:

// Copy
// Edit
// 6
// Time Complexity
// The largestElementIndex function runs in O(n) time because it scans through the entire array once to find the largest element.
// Since the function is called twice, the overall time complexity of the program is:
// 𝑂
// (
// 𝑛
// )
// +
// 𝑂
// (
// 𝑛
// )
// =
// 𝑂
// (
// 𝑛
// )
// O(n)+O(n)=O(n)
// Summary
// The program uses a simple approach to find the second largest element by first finding the largest element, replacing it, and then finding the next largest element.
// Optimization: This solution takes O(n) time and works well for smaller arrays, but there are more optimized ways (like finding both largest and second largest in one pass) to solve this problem.
// Let me know if you'd like further clarification!