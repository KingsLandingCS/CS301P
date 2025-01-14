#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void fun(int *x)
{
    cout << *x << endl;
}

int main()
{
    int x = 9;
    fun(&x);

    return 0;
}