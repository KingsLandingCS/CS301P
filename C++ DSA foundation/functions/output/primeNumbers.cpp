#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;

    for (int i = 2; i <= (num - 1); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a = 2, b = 10;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " " << endl;
        }
    }
    return 0;
}
