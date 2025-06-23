#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Flexible array
    vector<int> arr;
    cout << "how many elements in a array?: ";
    int n;
    cin >> n;

    // Enter elements in the array
    cout << "enter your " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    if (arr.empty())
    {
        cout << "No element found in the array" << endl;
        return 0;
    }

    bool sortedFlag = true;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            sortedFlag = false;
            break;
        }
    }

    cout << (sortedFlag ? "The array entered is sorted" : "The array entered is not sorted") << endl;
}