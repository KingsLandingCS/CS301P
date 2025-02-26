#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    // k can be greater than n

    k = k % n;
    int ansArr[5];
    int j = 0;

    for (int i = n - k; i < n; i++)
    {
        ansArr[j++] = arr[i];
    }

    // inserting last k elements in ans Arr
    for (int i = 0; i <= k; i++)
    {
        ansArr[j++] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ansArr[i] << " ";
    }
    cout << endl;

    return 0;
}