#include <iostream>
using namespace std;

int main()
{
    int starRows, starCols;
    cout << "Please enter the number of star rows: ";
    cin >> starRows;
    cout << "Please enter the number of star cols: ";
    cin >> starCols;

    for (int line = 1; line <= starRows; line++)
    {
        for (int i = 1; i <= starCols; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}