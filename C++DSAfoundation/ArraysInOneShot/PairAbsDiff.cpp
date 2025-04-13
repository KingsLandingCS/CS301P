#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {5, 10, 15, 20, 26};
    int n = 5;
    int x = 10;

    // code to check whether there any pair with the given abs diff
    int i = 0;
    int j = 1;
    bool found = false;

    while (i < n && j < n)
    {
        if (abs(arr[i] - arr[j]) == x)
        {
            found = true;
            break;
        }
        else if (abs(arr[i] - arr[j]) < x)
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    if (found == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << endl;

    return 0;
}