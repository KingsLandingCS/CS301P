#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter Array's length: ";
    int n;
    cin >> n;

    cout << "Enter Array's elements: ";
    vector<int> arr(n);
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

    cout << "no. of elements you want to check: ";
    int q;
    cin >> q;

    while (q--)
    {
        int queryElement;
        cin >> queryElement;
        cout << "Frequeny of number you entered: " << freq[queryElement] << endl;
    }

    return 0;
}