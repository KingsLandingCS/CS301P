#include <iostream>
using namespace std;

int main()
{

    // integer data type
    int apples = 5;
    cout << apples << endl;
    cout << "Size of int: " << sizeof(apples) << endl;

    // char datatpye
    char sign = '&';
    cout << sign << endl;
    cout << "Size of charr:" << sizeof(sign) << endl;


    bool flag = true;
    cout << flag << endl;
    cout << "Size of bool: " << sizeof(flag) << endl;

    float score = 3.14;
    cout << score << endl;
    cout << "Size of float: " << sizeof(score) << endl;

    return 0;
}