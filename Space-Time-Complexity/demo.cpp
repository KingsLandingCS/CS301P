#include <iostream>
using namespace std;

int sumInRange(int x, int y)
{
    int result = 0;
    for (int i = x; i <= y; i++)
    {
        result += i;
    }
    return result;
}

int sumInRangeOptimized(int x, int y)
{
    int n = (y - x + 1);
    int a = x;
    int result = (n * (2 * a + (n - 1) * 1)) / 2;
    return result;
}

int main()
{
    cout << sumInRangeOptimized(1, 100000) << endl;
    return 0;
}