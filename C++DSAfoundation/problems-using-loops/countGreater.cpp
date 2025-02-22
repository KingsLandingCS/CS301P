#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(9);
    for (int i = 0; i < 9; i++)
    {
        cin >> v[i];
    }

    cout << "User Input: ";
    int x;
    cin >> x;

    int occurrences = 0;

    for (int ele : v)
    {
        if (ele > x)
        {
            occurrences++;
        }
    }

    cout << occurrences << endl;
}