#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<vector<int>> &vec)
{
    int n = vec.size();

    // transpose (swap only upper triangle)
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) // ✅ only j > i
        {
            swap(vec[i][j], vec[j][i]);
        }
    }

    // reverse each row
    for (int i = 0; i < n; i++)
    {
        reverse(vec[i].begin(), vec[i].end());
    }
}

int main()
{
    int n;
    cout << "Enter matrix size (n x n): ";
    cin >> n;

    vector<vector<int>> vec(n, vector<int>(n));

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }

    rotateArray(vec);

    cout << "Rotated matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
