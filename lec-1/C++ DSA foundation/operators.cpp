#include <iostream>
using namespace std;

int main()
{
    int a = 8;
    cout << sizeof(a) << endl;

    char name = 'a';
    cout << sizeof(name) << endl;

    bool flag;
    a == name ? flag = true : flag = false;
    cout << flag << endl;

    cout << (&a) << endl;

    int c = 6;
    cout << (c++) << endl;
    int b = c + 5;
    cout << (b) << endl;

    return 0;
}