#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 6, 7, 1};
    int targetSum = 7;

    int size = 5;
    int pairs = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == targetSum)
            {
                cout << "Pair found: " << arr[i] << " (index " << i << ") + "
                     << arr[j] << " (index " << j << ") = " << targetSum << endl;
                pairs++;
            }
        }
    }

    cout << "Total pairs found: " << pairs << endl;

    return 0;
}
