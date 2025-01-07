#include <iostream>
using namespace std;

bool isOdd(int num)
{
    if (num % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a = 1;
    int b = 10;

    for (int i = a; i <= b; i++)
    {
        if (isOdd(i))
        {
            cout << i << " " << endl;
        }
    }

    return 0;
}