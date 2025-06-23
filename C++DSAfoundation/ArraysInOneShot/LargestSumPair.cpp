#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {-2, -1, 0, 3, 6, 8, 11, 12};
    int x = 16;
    int n = 8;

    // code to find if there is a pair with sum x
    int i = 0;
    int j = n - 1;

    bool found = false;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            // We found a pair
            found = true;
            break;
        }
        else if (arr[i] + arr[j] < x)
        {
            // sum is less than x, increase the sum
            i++;
        }
        else
        {
            // sum is more than x, decrease the sum
            j--;
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