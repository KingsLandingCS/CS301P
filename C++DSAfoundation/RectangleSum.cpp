#include <iostream>
#include <vector>

using namespace std;

int rectangleSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int sum = rectangleSum(matrix, l1, r1, l2, r2);
    cout << "Sum: " << sum << endl;

    return 0;
}



// What this program does

// Reads a matrix of size n × m from the user.

// Reads a rectangle query given by two corners: (l1, r1) (top-left) and (l2, r2) (bottom-right).

// Computes the sum of all elements inside that rectangle (inclusive).

// Prints the matrix and the sum.

// Code pieces (high level)
// 1) main()

// cin >> n >> m;
// Read matrix dimensions.

// vector<vector<int>> matrix(n, vector<int>(m));
// Create an n × m matrix (all zeros initially).

// Input loop

// for i = 0..n-1:
//   for j = 0..m-1:
//     cin >> matrix[i][j]

// Fill the matrix row by row.

// Read rectangle corners
// cin >> l1 >> r1 >> l2 >> r2;

// Print matrix (two nested loops).

// Call rectangleSum(matrix, l1, r1, l2, r2) and print the result.

// 2) rectangleSum(...)

// Parameters:

// matrix by reference (efficient, no copy; we’re not modifying it).

// four ints: l1, r1, l2, r2.

// Work:

// sum = 0
// for i = l1..l2:
//   for j = r1..r2:
//     sum += matrix[i][j]
// return sum

// Time complexity: O((l2-l1+1) * (r2-r1+1)).

// Important assumptions (you should ensure these are true in valid input):

// 0 ≤ l1 ≤ l2 < n

// 0 ≤ r1 ≤ r2 < m

// Step-by-step run (with a concrete example)

// Let’s use this input so we can visualize clearly:

// n m
// 3 3
// matrix values (row by row)
// 1 2 3
// 4 5 6
// 7 8 9
// rectangle corners
// 0 0 1 1

// So:

// n=3, m=3

// Matrix:

// [ [1, 2, 3],
//   [4, 5, 6],
//   [7, 8, 9] ]

// Rectangle from (l1=0, r1=0) to (l2=1, r2=1) → the 2×2 block in the top-left:

// 1 2
// 4 5

// A) Inputting the matrix (the first nested loop)

// Outer i = 0..2, inner j = 0..2:

// Step	(i, j)	Read → matrix[i][j]	Row snapshot after step
// 1	(0,0)	1	[1, _, _]
// 2	(0,1)	2	[1, 2, _]
// 3	(0,2)	3	[1, 2, 3]
// 4	(1,0)	4	[4, _, _]
// 5	(1,1)	5	[4, 5, _]
// 6	(1,2)	6	[4, 5, 6]
// 7	(2,0)	7	[7, _, _]
// 8	(2,1)	8	[7, 8, _]
// 9	(2,2)	9	[7, 8, 9]

// Final matrix:

// 1 2 3
// 4 5 6
// 7 8 9

// B) Printing the matrix

// Same traversal order (i=0..2, j=0..2), just outputs:

// 1 2 3
// 4 5 6
// 7 8 9

// C) Computing the rectangle sum (the second nested loop)

// Call:

// int sum = rectangleSum(matrix, 0, 0, 1, 1);

// Inside rectangleSum:

// Initialize sum = 0.

// Loop i = 0..1, and for each i, loop j = 0..1.

// We’ll “scan” the rectangle left-to-right, top-to-bottom:

// Matrix with the selected rectangle marked by brackets:

// [ 1  2 ] 3
// [ 4  5 ] 6
//   7  8   9

// Iteration-by-iteration:

// Iter	i	j	matrix[i][j]	sum(before) → sum(after)
// 1	0	0	1	0 → 1
// 2	0	1	2	1 → 3
// 3	1	0	4	3 → 7
// 4	1	1	5	7 → 12

// Return 12.

// Program prints:

// Sum: 12

// Why pass the matrix by reference (&)?

// Efficiency: passing a big vector<vector<int>> by value would copy the whole matrix.

// We don’t modify it inside rectangleSum, so a const vector<vector<int>>& would be ideal in production (read-only + no copy). Your version uses non-const reference, which still avoids copy.

// Mental model (how to “see” the loops)

// Think of i as the row cursor and j as the column cursor.

// For the input and print loops:

// i moves from top row to bottom row.

// For each row, j walks left to right.

// For the sum loop:

// i starts at l1 and stops at l2.

// Inside each row i, j starts at r1 and stops at r2.

// Each visit adds that cell’s value to sum.