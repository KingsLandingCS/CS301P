#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findLargestAndSecondLargest(int arr[], int size, int &max, int &secondMax)
{
    max = INT_MIN;
    secondMax = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main()
{
    int arr[] = {2, 3, 5, 7, 6, 1, 7};
    int n = 7;
    int max, secondMax;
    findLargestAndSecondLargest(arr, n, max, secondMax);

    cout << "Largest Element: " << max << endl;
    cout << "Second Largest Element: " << secondMax << endl;

    return 0;
}