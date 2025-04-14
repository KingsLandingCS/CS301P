#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-4, -3, -1, 0, 2, 10};
    int n = 6;

    int result[n];
    int i = 0, j = n - 1, k = n - 1;

    while (i <= j && k >= 0)
    {
        if (abs(arr[i]) > abs(arr[j]))
        {
            result[k] = arr[i] * arr[i];
            i++;
            k--;
        }
        else
        {
            result[k] = arr[j] * arr[j];
            j--;
            k--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

        return 0;
}