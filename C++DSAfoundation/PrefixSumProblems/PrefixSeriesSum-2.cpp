#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // calculate prefix sum array
    for (int i = 1; i <= n; i++)
    {
        int prefixSumArray = v[i] += v[i - 1];
        cout << "Prefix sum at index " << i << ": " << prefixSumArray << endl;
    }

    int q;
    cin >> q;

    int queryCount = 1; // start counting from 1

    while (q--)
    {
        int l, r;
        cout << "Query #" << queryCount << ": ";
        cin >> l >> r;

        int ans = 0;
        ans = v[r] - v[l - 1];

        cout << "Sum from index " << l << " to " << r << " = " << ans << endl;

        queryCount++; // move to next query
    }

    return 0;
}