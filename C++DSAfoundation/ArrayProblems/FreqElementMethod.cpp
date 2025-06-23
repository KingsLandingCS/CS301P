#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "How numbers in the Array: ";
    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the Elements of the Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    const int N = 1e5 + 10;
    vector<int> freq(N, 0);

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int queryElement;
        cin >> queryElement;
        cout << freq[queryElement] << endl;
    }

    return 0;
}