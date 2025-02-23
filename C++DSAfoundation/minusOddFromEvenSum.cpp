#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    cout << "How many elements in your array? ";
    int n;
    cin >> n;

    cout << "Enter your " << n << "elements: ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        // Handles invalid input
        if (cin.fail())
        {
            cout << "Invalid input!";
            return 0; // stops execution immediately (anything after it is skipped).
        }

        arr.push_back(num);
    }

    // Edge case if no numbers found
    if (arr.empty())
    {
        cout << "No values found!" << endl;
        return 0;
    }

    int evenIndexSum = 0;
    int oddIndexSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i % 2 == 0)
        {
            evenIndexSum += arr[i];
        }
        else
        {
            oddIndexSum += arr[i];
        }
    }

    cout << "Even Sum: " << evenIndexSum << endl;
    cout << "Odd Sum:" << oddIndexSum << endl;

    cout << "Differnce (evenSum - oddSum): " << evenIndexSum - oddIndexSum << endl;
}