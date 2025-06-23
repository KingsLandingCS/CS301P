#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    cout << "Total number of elements: ";
    int n;
    cin >> n;
    if (cin.fail())
    {
        cout << "invalid Input!" << endl;
        return 1;
    }

    cout << "Please enter your elements: ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    if (arr.empty())
    {
        cout << "Empty array!" << endl;
        return 1;
    }

    cout << "Please enter the Sum you want to check: ";
    int targetSum;
    cin >> targetSum;

    int pairs = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == targetSum)
            {
                cout << "Pair found: " << arr[i] << " (index " << i << ") + "
                     << arr[j] << " (index " << j << ") = " << targetSum << endl;
            }
        }
    }

    return 0;
}