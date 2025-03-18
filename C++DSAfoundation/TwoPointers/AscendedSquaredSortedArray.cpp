#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void ascendedSquaredSortedArray(vector<int> &v)
{
    vector<int> ans;
    int leftPtr = 0;
    int rightPtr = v.size() - 1;

    while (leftPtr <= rightPtr)
    {
        if (abs(v[leftPtr]) < abs(v[rightPtr]))
        {
            ans.push_back(v[rightPtr] * v[rightPtr]);
            rightPtr--;
        }
        else
        {
            ans.push_back(v[leftPtr] * v[leftPtr]);
            leftPtr++;
        }
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    ascendedSquaredSortedArray(v);

    return 0;
}