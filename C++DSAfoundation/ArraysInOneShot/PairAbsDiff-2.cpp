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
    int count = 0; // Counter for number of pairs found

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << arr[i] << ", " << arr[j] << ") → " << endl;

            if (i == j)
            {
                continue; // skip same elements
            }

            else if (arr[i] - arr[j] == x)
            {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ") → " << x << "\n";
                found = true;
                count++;
            }
            // else if (arr[j] - arr[i] == x)
            // {
            //     cout << "Pair found: (" << arr[j] << ", " << arr[i] << ") → " << x << "\n";
            //     found = true;
            //     count++;
            // }
        }
    }

    if (!found)
    {
        cout << "No pair has been found" << endl;
    }
    else
    {
        cout << "Total number of pairs found: " << count << endl;
    }

    return 0;
}
