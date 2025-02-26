#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargestElement(int arr[], int size)
{
    int max = INT_MIN;
    int secondMax = INT_MIN;

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

    cout << "secondLargestElement: " << secondLargestElement(arr, n) << endl;
    return 0;
}