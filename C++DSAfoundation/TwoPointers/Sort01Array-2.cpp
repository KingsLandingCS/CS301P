#include <iostream>
#include <vector>
using namespace std;

void sortZeroesAndOnes(vector<int> &v)
{
    int leftPtr = 0;
    int rightPtr = v.size() - 1;

    while (leftPtr < rightPtr)
    {
        if (v[leftPtr] == 1 && v[rightPtr] == 0)
        {
            v[leftPtr++] = 0;
            v[rightPtr--] = 1;
        }

        if (v[leftPtr] == 0)
        {
            leftPtr++;
        }

        if (v[rightPtr] == 1)
        {
            rightPtr--;
        }
    }

    return;
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

    sortZeroesAndOnes(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}