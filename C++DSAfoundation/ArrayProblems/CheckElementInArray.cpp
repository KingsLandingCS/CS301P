#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    const int N = 1e5 + 10; // 1e5 means "1 × 10^5", which is 100000. This is scientific notation in C++ for writing large numbers.
    vector<int> freq(N, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    cout << "Enter queries: ";
    int q;
    cin >> q;

    while (q--)
    {
        int queryElement;
        cin >> queryElement;
        cout << freq[queryElement] << endl;
    }

    return 0;
}

// Let's go through this step by step with a detailed explanation and visual breakdown to help you fully understand how this works.

// Step 1: What is vector<int> freq(N, 0); doing?
// cpp
// Copy
// Edit
// const int N = 1e5 + 10;  // N = 100010
// vector<int> freq(N, 0);  // Creates a vector with 100010 elements, all initialized to 0.
// ✔ This creates a vector named freq with 100010 elements, all initially set to 0.

// ✔ Memory representation of freq before any updates:

// makefile
// Copy
// Edit
// Index:  [0]  [1]  [2]  [3]  [4]  [5]  [6]  [7]  [8]  ...
// Value:   0    0    0    0    0    0    0    0    0   ...
// Step 2: What does freq[arr[i]]++ do?
// 🔹 Loop Explanation
// cpp
// Copy
// Edit
// for (int i = 0; i < n; i++)
// {
//     freq[arr[i]]++;   // Increments the count at index arr[i]
// }
// ✔ This loops through each element of arr and increments the count in freq at index arr[i].

// Step 3: Example Execution
// Let's assume the user inputs:

// ini
// Copy
// Edit
// n = 5
// arr = {3, 5, 3, 3, 5}
// ✔ Initial arr representation:

// makefile
// Copy
// Edit
// Index:  [0]  [1]  [2]  [3]  [4]
// Value:   3    5    3    3    5
// ✔ Step-by-step updates to freq:
// 🔹 Iteration 1 (i = 0):

// arr[0] = 3, so we increment freq[3]:
// perl
// Copy
// Edit
// freq[3] = 1
// ✅ Updated freq:
// makefile
// Copy
// Edit
// Index:  [0]  [1]  [2]  [3]  [4]  [5]  ...
// Value:   0    0    0    1    0    0   ...
// 🔹 Iteration 2 (i = 1):

// arr[1] = 5, so we increment freq[5]:
// perl
// Copy
// Edit
// freq[5] = 1
// ✅ Updated freq:
// makefile
// Copy
// Edit
// Index:  [0]  [1]  [2]  [3]  [4]  [5]  ...
// Value:   0    0    0    1    0    1   ...
// 🔹 Iteration 3 (i = 2):

// arr[2] = 3, so we increment freq[3]:
// perl
// Copy
// Edit
// freq[3] = 2
// ✅ Updated freq:
// makefile
// Copy
// Edit
// Index:  [0]  [1]  [2]  [3]  [4]  [5]  ...
// Value:   0    0    0    2    0    1   ...
// 🔹 Iteration 4 (i = 3):

// arr[3] = 3, so we increment freq[3]:
// perl
// Copy
// Edit
// freq[3] = 3
// ✅ Updated freq:
// makefile
// Copy
// Edit
// Index:  [0]  [1]  [2]  [3]  [4]  [5]  ...
// Value:   0    0    0    3    0    1   ...
// 🔹 Iteration 5 (i = 4):

// arr[4] = 5, so we increment freq[5]:
// perl
// Copy
// Edit
// freq[5] = 2
// ✅ Final freq:
// makefile
// Copy
// Edit
// Index:  [0]  [1]  [2]  [3]  [4]  [5]  ...
// Value:   0    0    0    3    0    2   ...
// Step 4: Understanding the Final freq
// ✔ Final freq vector meaning:

// freq[3] = 3 → The number 3 appears 3 times in arr.
// freq[5] = 2 → The number 5 appears 2 times in arr.
// freq[4] = 0 → The number 4 does not appear in arr.
// Final Summary
// Code	Meaning
// vector<int> freq(N, 0);	Creates a vector to store the frequency of numbers
// for (int i = 0; i < n; i++) freq[arr[i]]++;	Loops through arr and counts occurrences of each number
// freq[arr[i]]++;	Increments the count at index arr[i] in freq

// 1️⃣ What is N = 1e5 + 10?
// cpp
// Copy
// Edit
// const int N = 1e5 + 10;  // N = 100000 + 10 = 100010
// 1e5 means 100000 (scientific notation).
// Adding 10 gives 100010.
// 2️⃣ Why do we need a large value like 100010?
// We are creating a frequency array (freq), where each index represents a number from arr, and its value stores the count of that number.

// cpp
// Copy
// Edit
// vector<int> freq(N, 0);  // Creates a frequency array of size 100010
// This means freq has 100010 elements, all initialized to 0.
// We use large size so that we can safely access freq[arr[i]] for any input value arr[i].
// 3️⃣ Example: What if arr has large numbers?
// Let's say we have this input:

// ini
// Copy
// Edit
// n = 5
// arr = {1, 2, 99999, 100000, 5}
// We then update frequencies:

// cpp
// Copy
// Edit
// for (int i = 0; i < n; i++) {
//     freq[arr[i]]++;  // Increment the count for each number
// }
// freq[1]++ → Stores frequency of 1
// freq[2]++ → Stores frequency of 2
// freq[99999]++ → Stores frequency of 99999
// freq[100000]++ → Stores frequency of 100000 ✅
// freq[5]++ → Stores frequency of 5
// Why N = 100010?
// The largest number in arr could be 100000.
// We need freq[100000] to exist.
// If N = 100000, then freq[100000] does NOT exist (out-of-bounds error) ❌.
// To prevent errors, we use N = 100010 (a little extra space). ✅

// cout << "Enter queries: ";
// int q;
// cin >> q;
// is used to ask the user how many queries they want to make, and then read the number of queries (q) from the user.

// Here’s a breakdown of the purpose:

// Prompting the user for input: cout << "Enter queries: "; displays the message "Enter queries: " to the user, so they know that the program is asking how many queries they wish to input.

// Reading the number of queries: cin >> q; takes the user's input for the number of queries (q). This value represents how many times the user will input a number, and the program will respond with the frequency of that number from the array arr.