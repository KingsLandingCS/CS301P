#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result -= i;
        }
        else
        {
            result += i;
        }
    }
    cout << result << endl;

    return 0;
}

// Code Overview
// This program computes the alternating sum of integers from
// 1
// 1 to
// 𝑛
// n, where:

// Even numbers are subtracted.
// Odd numbers are added.
// Input
// The program prompts the user to enter a number (
// 𝑛
// n) and calculates the result based on the following logic:

// result=1−2+3−4+5−6+…±n

// Example Execution of the Program : Let’s assume the input is n = 5.

//                                    Input : 5 Initial Setup : result = 0 n = 5 Iteration 1(i = 1) : Condition : 1 %
//                                                                                                    2
// ≠ 0 1 % 2
//  = 0(odd number).Action : Add 1 1 to result : result =
//                                                                                 0 +
//                                                                                 1 =
//                                                                                     1 result = 0 + 1 = 1 Updated result : 1 Iteration 2(i = 2) : Condition : 2 %
//                                                                                                                                                  2 =
//                                                                                                            0 2 % 2 = 0(even number).Action : Subtract 2 2 from result : result =
//                                                                                                                1
// − 2 =
// − 1 result = 1−2 =−1 Updated result : -1 Iteration 3(i = 3) : Condition : 3 %
//                                                                2
// ≠ 0 3 % 2
//  = 0(odd number).Action : Add 3 3 to result : result =
// − 1 +
//                                                                                                                3 =
//                                                                                                                    2 result =−1 + 3 = 2 Updated result : 2 Iteration 4(i = 4) : Condition : 4 %
//                                                                                                                                                                                 2 =
//                                                                                                                                           0 4 % 2 = 0(even number).Action : Subtract 4 4 from result : result =
//                                                                                                                                               2
// − 4 =
// − 2 result = 2−4 =−2 Updated result : -2 Iteration 5(i = 5) : Condition : 5 %
//                                                                2
// ≠ 0 5 % 2
//  = 0(odd number).Action : Add 5 5 to result : result =
// − 2 +
//                                                                                                                                               5 =
//                                                                                                                                                   3 result =−2 + 5 = 3 Final result : 3 Final Output : The program will print : Copy code 3