#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    // Declare a 2D vector
    vector<vector<int>> array(n, vector<int>(m));

    cout << "Enter the elements: ";
    // Input elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }

    // Output elements
    cout << "Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}