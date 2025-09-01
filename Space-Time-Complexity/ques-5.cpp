#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sqrt(n); j++)
        {
            cout << "*";
        } // O(sqrt(n))
        cout << endl;
    } // O(nsqrt(n))

    return 0;
}


