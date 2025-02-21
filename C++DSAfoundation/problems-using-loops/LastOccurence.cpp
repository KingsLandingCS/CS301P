#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }

    cout << "Enter x:";
    int x;
    cin >> x;

    int occurence = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            occurence = i;
        }
    }

    cout << occurence << endl;

    return 0;
}


// Step 2: Declare and Initialize a Vector
// cpp
// Copy
// Edit
// vector<int> v(6);
// Creates a vector v of size 6 to store six integers.
// Step 3: Input 6 Elements
// cpp
// Copy
// Edit
// for (int i = 0; i < 6; i++)
// {
//     cin >> v[i];
// }
// A for loop runs 6 times (i = 0 to i = 5).
// It takes input from the user and stores it in vector v.
// Example Input:

// Copy
// Edit
// 3 2 4 2 5 2
// Now, v = [3, 2, 4, 2, 5, 2]

// Step 4: Input the Number to Search
// cpp
// Copy
// Edit
// cout << "Enter x:" << endl;
// int x;
// cin >> x;
// Asks the user for a number (x) to search in the vector.
// Example Input:

// Copy
// Edit
// 2
// Step 5: Search for the Last Occurrence
// cpp
// Copy
// Edit
// int occurence = -1;
// Initializes occurence to -1, assuming x is not found.
// cpp
// Copy
// Edit
// for (int i = 0; i < v.size(); i++)
// {
//     if (v[i] == x)
//     {
//         occurence = i;
//     }
// }
// Loops through each element of v from index 0 to 5.
// If the current element v[i] matches x, the variable occurence is updated to i.
// Since occurence is updated each time x is found, it will store the last index where x appears.
// Example Walkthrough (x = 2)
// Iteration	i	v[i]	x	Condition (v[i] == x)	occurence Updated?	occurence Value
// 1st	0	3	2	❌ No	No	-1
// 2nd	1	2	2	✅ Yes	Yes (occurence = 1)	1
// 3rd	2	4	2	❌ No	No	1
// 4th	3	2	2	✅ Yes	Yes (occurence = 3)	3
// 5th	4	5	2	❌ No	No	3
// 6th	5	2	2	✅ Yes	Yes (occurence = 5)	5
// After the loop finishes, occurence = 5 because 2 appears last at index 5.

// Step 6: Print the Result
// cpp
// Copy
// Edit
// cout << occurence << endl;
// Prints the last index where x was found.
// If x was never found, occurence remains -1.
// Example Output
// Copy
// Edit
// 5
// Final Output Examples
// Example 1
// Input:

// yaml
// Copy
// Edit
// 3 2 4 2 5 2
// Enter x:
// 2
// Output:

// Copy
// Edit
// 5
// (Last occurrence of 2 is at index 5)

// Example 2
// Input:

// yaml
// Copy
// Edit
// 10 20 30 40 50 60
// Enter x:
// 25
// Output:

// diff
// Copy
// Edit
// -1
// (25 is not in the list, so -1 is printed)

// Time Complexity Analysis
// The loop runs once over v, making O(n) = O(6) = O(1) (constant time).
// Efficient for small input sizes but scales linearly as input grows.
// Key Takeaways
// ✅ Uses a vector<int> to store elements.
// ✅ Searches for the last occurrence of x.
// ✅ If found, prints the last index; otherwise, prints -1.
// ✅ Time complexity is O(n), where n is the number of elements in v.