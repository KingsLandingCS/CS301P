#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    // Declare a 2D vector
    vector<vector<int>> array(n, vector<int>(m));

    cout << "Enter the elements: ";
    // Input elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }

    // Output elements
    cout << "Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// vector<vector<int>> array(n, vector<int>(m));
// This creates a 2D vector, which is essentially a matrix or table of integers.

// 🧩 What It Does:
// vector<vector<int>> means a vector of vectors of integers.

// array(n, vector<int>(m)) initializes:

// n rows (outer vector),

// and each row is a vector of m integers (inner vector),

// with all values initialized to 0 by default.

// 💡 Visual Example:
// Let’s say n = 3 and m = 4. This creates:

// csharp
// Copy
// Edit
// [
//   [0, 0, 0, 0],   // Row 0
//   [0, 0, 0, 0],   // Row 1
//   [0, 0, 0, 0]    // Row 2
// ]
// You can then access elements just like in a 2D array:

// cpp
// Copy
// Edit
// array[1][2] = 99; // changes the value at row 1, column 2 to 99
// ⚙️ Why Use It?
// It's safe (no memory issues).

// It's dynamic (you don’t need to know the size at compile time).

// It's easy to resize later if needed.
