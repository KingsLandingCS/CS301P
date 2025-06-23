#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << "Enter x: ";
    int x;
    cin >> x;

    int occurrences = 0;

    for (int ele : v)
    {
        if (ele == x)
        {
            occurrences++;
        }
    }
    cout << occurrences << endl;

    return 0;
}