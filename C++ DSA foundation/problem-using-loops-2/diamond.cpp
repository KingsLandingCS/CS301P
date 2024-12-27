#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // loop to print upper triangle
    for (int line = 1; line <= n; line++)
    {
        // print spaces
        int noOfSpaces = n - line;
        for (int j = 0; j < noOfSpaces; j++)
        {
            cout << " ";
        }

        // this loop does some work for each line
        int noOfChars = 2 * line - 1;
        for (int i = 0; i < noOfChars; i++)
        {
            char ch = (char)('A' + i);
            cout << ch;
        }
        cout << endl;
    }

    // loop to print lower triangle
    for (int line = n + 1; line <= 2 * n - 1; line++)
    {
        int noOfSpaces = (line - n);
        for (int i = 0; i < noOfSpaces; i++)
        {
            cout << " ";
        }

        int noOfChars = 2 * (2 * n - line) - 1;
        for (int j = 0; j < noOfChars; j++)
        {
            cout << (char)('A' + j);
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}
