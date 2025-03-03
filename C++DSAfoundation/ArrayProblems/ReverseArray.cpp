#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int k = 2;
    k = k % arr.size();

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());

    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}



// cpp
// Copy
// Edit
// reverse(arr.begin(), arr.begin() + k);
// works step by step.

// Example:
// Initial array before reversing:
// ini
// Copy
// Edit
// arr = [6, 5, 4, 3, 2, 1]
// Let's assume k = 2.

// This means the first k = 2 elements (6, 5) will be reversed.

// Step-by-step visualization:
// The range arr.begin() to arr.begin() + k refers to only the first k = 2 elements.

// Index	0	1	2	3	4	5
// Before	6	5	4	3	2	1
// Reverse first k=2 elements	5	6	4	3	2	1
// Final result after reverse(arr.begin(), arr.begin() + k);
// ini
// Copy
// Edit
// arr = [5, 6, 4, 3, 2, 1]
// Only the first 2 elements [6, 5] got swapped to [5, 6].

// Key Concept:
// reverse(start, end) swaps elements within the given range.
// It only reverses the subarray [arr.begin(), arr.begin() + k), meaning from index 0 to k-1.
// Would you like me to explain it with another example? 😊