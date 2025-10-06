#include <iostream>

using namespace std;

main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int found = 0, search_value;

    cout << "Enter Value for search: ";
    cin >> search_value;

    for (int i = 0; i <= 4; i++)
    {
        if (search_value == a[i])
        {
            cout << "value is found" << endl;

            found++;
            break;
        }
    }

    if (found == 0)
    {
        cout << "Value can't be found" << endl;
    }
}