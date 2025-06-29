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

    while (left <= right && top <= bottom)
    {
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                matrix[top][i] = value++;
            }
            top++;
        }
        else if (direction == 1)
        {
            for (int j = top; j <= bottom; j++)
            {
                matrix[j][right] = value++;
            }
            right--;
        }
        else if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                matrix[bottom][i] = value++;
            }
            bottom--;
        }
        else // direction == 3
        {
            for (int j = bottom; j >= top; j--)
            {
                matrix[j][left] = value++;
            }
            left++; // ✅ fix: increment left, not bottom
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

    cout << "\nSpiral matrix:\n";
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
