#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int digits = 0;
    cout << "Initial value of n: " << n << ", digits: " << digits << endl;

    while (n > 0)
    {
        digits++;
        cout << "Incrementing digits to: " << digits << endl;

        cout << "and value of n: " << n << endl;

        n = n / 10;
        cout << "Dividing n by 10. Updated value of n: " << n << endl;
    }

    cout << "Final count of digits: " << digits << endl;

    return 0;
}
