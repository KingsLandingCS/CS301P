#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> createSpiralMatrix(int n)
{
    vector<vector<int>> matrix(n, vector<int>(n));

    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = n - 1;

    int direction = 0;
    int value = 1;

    // the loop runs as far as left is not equal right and top is not equal to bottom
    while (left <= right && top <= bottom)
    {
        // left to right direction
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                matrix[top][i] = value++;
            }
            top++;
        }
        // top to bottom direction
        else if (direction == 1)
        {
            for (int j = top; j <= bottom; j++)
            {
                matrix[j][right] = value++;
            }
            right--;
        }
        // right to left direction
        else if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                matrix[bottom][i] = value++;
            }
            bottom--;
        }
        // bottom to top direction
        else
        {
            for (int j = bottom; j >= top; j--)
            {
                matrix[j][left] = value++;
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
    return matrix;
}

int main()
{
    int n;
    cout << "Enter matrix size: ";
    cin >> n;

    vector<vector<int>> matrix = createSpiralMatrix(n);

    cout << "Spiral Matrix: " << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}