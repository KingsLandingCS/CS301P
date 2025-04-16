#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {-2, -1, 0, 1, 3, 4, 6, 8, 11, 12};
    int n = 12;
    int x = 12;

    // code to check whether there any pair with the given abs diff
    int i = 0;
    int j = n - 1;
    int answer = 0;

    while (i < j)
    {
        if (arr[i] - arr[j] == x)
        {

            answer += 1;
            i++;
            j--;
        }
        else if (abs(arr[i] - arr[j]) < x)
        {

            i++;
        }
        else
        {

            j--;
        }
    }

    cout << answer;
    cout << endl;

    return 0;
}