#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> pascal(n);

    for (int i = 0; i < n; i++)
    {
        pascal[i].resize(i + 1);
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    return pascal;
}

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    vector<vector<int>> ans = pascalTriangle(n);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++) // ✅ use ans[i].size()
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



/*
🧠 Pascal's Triangle Formula

Each element at row i and column j (0-indexed) is given by the binomial coefficient:

    pascal[i][j] = (i choose j)
                 = i! / (j! * (i - j)!)

Where:
    i! = factorial of i (row number)
    j! = factorial of j (column number)

🧮 Example Calculations for Row 4:
    pascal[4][0] = 4! / (0! * 4!) = 1
    pascal[4][1] = 4! / (1! * 3!) = 4
    pascal[4][2] = 4! / (2! * 2!) = 6
    pascal[4][3] = 4! / (3! * 1!) = 4
    pascal[4][4] = 4! / (4! * 0!) = 1

✅ So Row 4 = 1 4 6 4 1

🔁 Recursive Formula Used in Code:

    pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j]

This means:
Each number is the sum of the two numbers directly above it in the previous row.

Example:
    pascal[4][2] = pascal[3][1] + pascal[3][2] = 3 + 3 = 6
*/