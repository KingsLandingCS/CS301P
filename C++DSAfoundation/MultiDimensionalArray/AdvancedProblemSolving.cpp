#include <vector>
#include <iostream>
using namespace std;

// 0 1 1 1
// 0 0 0 1
// 0 0 1 1

// maxOnes = min_value
// maxOnesRow = -1
// columns = 4

int maximumOnesRow(vector<vector<int>> &V)
{
    int maxOnes = INT_MIN;
    int maxOnesRow = -1;
    int columns = V[0].size();

    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j < V[i].size(); j++)
        {
            if (V[i][j] == 1)
            {
                int numberOfOnes = columns - j;
                if (numberOfOnes > maxOnes)
                {
                    maxOnes = numberOfOnes;
                    maxOnesRow = i;
                }
            }
        }
    }
    return maxOnesRow;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }

    int res = maximumOnesRow(vec);
    cout << res << endl;

    return 0;
}