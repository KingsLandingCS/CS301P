#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Please enter the length of the input: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter target difference: ";
    cin >> x;

    bool found = false;

    for (int i = 0; i < n && !found; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (arr[i] - arr[j] == x)
            {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ") → Difference = " << arr[i] - arr[j] << "\n";
                found = true;
                break;
            }
            else if (arr[j] - arr[i] == x)
            {
                cout << "Pair found: (" << arr[j] << ", " << arr[i] << ") → Difference = " << arr[j] - arr[i] << "\n";
                found = true;
                break;
            }
        }
    }

    if (!found)
    {
        cout << "No pair has been found" << endl;
    }

    return 0;
}
