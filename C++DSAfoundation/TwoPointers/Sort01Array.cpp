#include <iostream>
#include <vector>
using namespace std;

void sortZeroesAndOnes(vector<int> &v) // we're passing the vector by reference since we want to mutate it instead of creating a new copy of it
{
    int countZeroes = 0;
    for (int ele : v) // this is a for each loop, here ele is the variable that traverses through each element and v (vector) is container that contains the values
    {
        if (ele == 0)
        {
            countZeroes++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i < countZeroes)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
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