#include <iostream>
using namespace std;

int main()
{
    int sp, cp;
    cout << "Enter selling price: ";
    cin >> sp;
    cout << "Enter cost price: ";
    cin >> cp;

    if (sp > cp)
    {
        int profit = sp - cp;
        cout << "Your profit is: " << profit << endl;
    }
    else if (cp > sp)
    {
        int loss = cp - sp;
        cout << "Your loss is: " << loss << endl;
    }
    else
    {
        cout << "No Profit or loss" << endl;
    }

    return 0;
}