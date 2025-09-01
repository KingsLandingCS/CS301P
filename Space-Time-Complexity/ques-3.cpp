#include <iostream>
using namespace std;

int main()
{

    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int arr2[] = {1, 8, 2, 6, 9, 7, 11, 10};
    int m = 8;
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += arr1[i];
    } // 3n = n

    for (int i = 0; i < m; i++)
    {
        sum1 += arr2[i];
    } // 3m = m

    cout << sum1 << " " << sum2;

    // O(n + m)

    return 0;
}