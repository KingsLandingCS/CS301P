#include <iostream>
#include <vector>

using namespace std;

int leftMostOneRow(vector < vector<int> & V)
{
    int leftMostOne = -1;
    int maxOnesRow = -1;
    int j = V[0].size() - 1;

    while (j >= 0; &&V[0][j] == 1)
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

int main()
{

    return 0;
}