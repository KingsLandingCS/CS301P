#include <iostream>
#include <vector>

using namespace std;

int leftMostOneRow(vector < vector<int> & V)
{
    int leftMostOne = -1;
    int maxOnesRow = -1;

    for (int j = V[0].size() - 1; j >= 0; j--)
    {
        if (V[0][j] == 1)
        {
            leftMostOne = j;
        }
        else
        {
            break;
        }
    }
}

int main()
{

    return 0;
}