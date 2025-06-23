#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n + 1, 0); // Ensure the vector is initialized with zero at index 0
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i]; // Input the values for the array
    }

    // Calculate prefix sum array
    vector<int> prefixSum(n + 1, 0); // Separate array for prefix sum
    for (int i = 1; i <= n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + v[i]; // Prefix sum formula
        cout << "Prefix sum at index " << i << ": " << prefixSum[i] << endl;
    }

    // Ask the user how many queries they want to inquire
    int q;
    cout << "How many queries would you like to ask? ";
    cin >> q;

    int queryCount = 1; // Start counting from 1

    while (q--)
    {
        int l, r;
        cout << "Please enter the Starting Index for your query: ";
        cin >> l;
        cout << "Please enter the Ending Index for your query: ";
        cin >> r;

        // Calculate the sum between indices l and r
        int ans = prefixSum[r] - prefixSum[l - 1];

        // Visualize the left and right index in the terminal
        cout << "Sum from index " << l << " to " << r << " = " << ans << endl;

        // Display the query count after the query result
        cout << "Query #" << queryCount << " computed." << endl;

        queryCount++; // Move to next query
    }

    return 0;
}
