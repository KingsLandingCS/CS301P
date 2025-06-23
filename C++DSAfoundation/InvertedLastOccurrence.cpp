#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
        cout << v[i];
    }
    cout << endl;

    cout << "User Input: ";
    int x;
    cin >> x;

    int occurrence;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            occurrence = i;
            break;
        }
    }

    cout << occurrence << endl;

    return 0;
}