#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter 2 integers: ";
    cin >> n1 >> n2;

    cout << "Enter an operator(+,-,*,/, %): ";
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Sum is: " << n1 + n2 << endl;
        break;
    case '-':
        cout << "Subtraction is: " << n1 - n2 << endl;
        break;
    case '*':
        cout << "Multiplication is: " << n1 * n2 << endl;
        break;
    case '/':
        cout << "Division is: " << n1 / n2 << endl;
        break;
    case '%':
        cout << "remainder is: " << n1 % n2 << endl;
        break;
    default:
        cout << "Invalid Operator!" << endl;
        break;
    }

    return 0;
}