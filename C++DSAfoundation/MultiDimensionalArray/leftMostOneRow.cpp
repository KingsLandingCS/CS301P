#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int leftMostOneRow(vector<vector<int>>& V)
{
    int leftMostOne = -1;
    int maxOnesRow = -1;
    int j = V[0].size() - 1;

    while (j >= 0 && V[0][j] == 1)
    {
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }

    for (int i = 1; i < V.size(); i++)
    {
        while (j >= 0 && V[i][j] == 1)
        {
            leftMostOne = j;
            j--;
            maxOnesRow = i;
        }
    }

    return maxOnesRow;
}

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