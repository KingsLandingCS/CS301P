#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        cout << factorial << endl;
    }

    return 0;
}

// n! = n x (n-1) x (n-2) x ... x 1
// n! = n x (n-1)!