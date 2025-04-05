#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // calculate prefix sum array
    for (int i = 1; i <= n; i++)
    {
        int prefixSumArray = v[i] += v[i - 1];
        cout << prefixSumArray << endl;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int ans = 0;

        // ans = prefixSumArray[r] - prefixSumArray[l-1]

        ans = v[r] - v[l - 1];
        cout << ans << endl;
    }

    return 0;
}

// ✅ Imagine a Basic Array
// Suppose we have this array:

// yaml
// Copy
// Edit
// Original array:
// Index:  1   2   3   4   5
// Values: 2   4   1   3   5
// Now let’s say you want to quickly get the sum from index l = 2 to r = 4:

// yaml
// Copy
// Edit
// That means: 4 + 1 + 3 = 8 ✅
// You could just add them every time… BUT that’s slow if you have many queries (like a million!).

// 🚀 So we use Prefix Sum!
// We create a prefix sum array. This means:

// prefix[i] = sum of all elements from index 1 to i

// Here’s how it looks:

// swift
// Copy
// Edit
// prefix[0] = 0
// prefix[1] = 2          → (just 2)
// prefix[2] = 2 + 4 = 6
// prefix[3] = 6 + 1 = 7
// prefix[4] = 7 + 3 = 10
// prefix[5] = 10 + 5 = 15
// So the prefix array becomes:

// makefile
// Copy
// Edit
// Index:   0   1   2   3   4   5
// Value:   0   2   6   7  10  15
// 🎯 Now, let’s break the formula
// We want sum from index l = 2 to r = 4
// We do:

// cpp
// Copy
// Edit
// ans = v[r] - v[l - 1];
// Let’s substitute:

// cpp
// Copy
// Edit
// ans = prefix[4] - prefix[1]
// ans = 10 - 2 = 8 ✅
// Boom! That’s the sum of 4 + 1 + 3, exactly what we wanted.

// 🔍 Why does this work?
// Imagine the prefix sum up to index r:

// prefix[r] = sum of elements from 1 to r

// And prefix sum up to just before l:

// prefix[l - 1] = sum of elements from 1 to l - 1

// So the difference is:

// python
// Copy
// Edit
// (prefix sum from 1 to r)
// – (prefix sum from 1 to l-1)
// = sum from l to r
// That's the logic behind the formula.

// 🧠 Visual Diagram
// vbnet
// Copy
// Edit
// Array:   [2]   [4]   [1]   [3]   [5]
// Index:    1     2     3     4     5
// Prefix:   2     6     7    10    15

// Want: sum from index 2 to 4 → 4 + 1 + 3 = 8
// Use: v[4] - v[1] → 10 - 2 = 8 ✅
// 🔄 Why not just loop from l to r every time?
// Because looping for every query takes O(n) time, but using this formula gives the result in O(1) time.

// So if you have many queries, prefix sum + this formula = super fast 🚀

// for (int i = 1; i <= n; i++)
// {
//     v[i] += v[i - 1];
// }
// This is where you're building the prefix sum array. Let’s break it down and visualize it step by step.

// 🧠 What’s the Goal?
// We want to convert the original array v into a prefix sum array.

// Remember:

// A prefix sum array is an array where each element at index i contains the sum of all elements from index 1 to i.

// 🚀 Let’s say the input is:
// makefile
// Copy
// Edit
// n = 5
// Original array: v[1] = 2, v[2] = 4, v[3] = 1, v[4] = 3, v[5] = 5
// (Note: v[0] is not used here, it’s just default 0 because we start from index 1)

// So initially:

// makefile
// Copy
// Edit
// Index:     0   1   2   3   4   5
// Array:     ?   2   4   1   3   5
// 🔄 Let’s Run the Loop
// Here’s the loop again:

// cpp
// Copy
// Edit
// for (int i = 1; i <= n; i++)
// {
//     v[i] += v[i - 1];
// }
// Iteration 1: i = 1
// markdown
// Copy
// Edit
// v[1] = v[1] + v[0]
//      = 2 + 0
//      = 2
// → v becomes: [?, 2, 4, 1, 3, 5]

// Iteration 2: i = 2
// markdown
// Copy
// Edit
// v[2] = v[2] + v[1]
//      = 4 + 2
//      = 6
// → v becomes: [?, 2, 6, 1, 3, 5]

// Iteration 3: i = 3
// markdown
// Copy
// Edit
// v[3] = v[3] + v[2]
//      = 1 + 6
//      = 7
// → v becomes: [?, 2, 6, 7, 3, 5]

// Iteration 4: i = 4
// markdown
// Copy
// Edit
// v[4] = v[4] + v[3]
//      = 3 + 7
//      = 10
// → v becomes: [?, 2, 6, 7, 10, 5]

// Iteration 5: i = 5
// markdown
// Copy
// Edit
// v[5] = v[5] + v[4]
//      = 5 + 10
//      = 15
// → v becomes: [?, 2, 6, 7, 10, 15]

// ✅ Final Result (Prefix Sum Array)
// makefile
// Copy
// Edit
// Index:     1   2   3   4   5
// Prefix:    2   6   7  10  15
// Now you can use:

// v[3] = sum from index 1 to 3 → 2 + 4 + 1 = 7

// v[5] = sum from index 1 to 5 → 2 + 4 + 1 + 3 + 5 = 15

// and so on...

// 🎯 In Summary
// This loop:

// cpp
// Copy
// Edit
// v[i] += v[i - 1];
// is cumulative addition, where each position builds on the sum from the previous.

// It's how we efficiently prepare the array for fast range queries later using:

// cpp
// Copy
// Edit
// v[r] - v[l - 1]
