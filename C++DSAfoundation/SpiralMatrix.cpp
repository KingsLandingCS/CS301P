#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    spiralOrder(matrix);

    return 0;
}