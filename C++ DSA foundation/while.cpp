#include <iostream>
using namespace std;

int main()
{
    int i = 5; // Initialize `i` to 5.
    cout << "Starting the loop...\n";

    while (true)
    {
        cout << "Checking i = " << i << endl;
        // Check if `i` is divisible by 7.
        if (i % 7 == 0)
        {
            cout << i << " is divisible by 7. Exiting loop.\n";
            break; // Exit the loop if the condition is met.
        }

        cout << i << " is not divisible by 7. Adding 5 to i.\n";
        i += 5; // Increment `i` by 5.
    }

    cout << "The final value of i is " << i << ".\n";
    return 0;
}
