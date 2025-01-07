#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num < 2) // 0 and 1 are not prime
        return false;

    for (int i = 2; i <= (num - 1); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a = 2, b = 10;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " " << endl;
        }
    }
    return 0;
}



// The expression num - 1 in the loop condition:

// cpp
// Copy code
// for (int i = 2; i <= (num - 1); i++)
// is used to define the range of numbers the function checks for divisors of num. It essentially limits the divisor checks to numbers from 2 to num - 1.

// Why Check Up to num - 1?
// Prime Number Definition
// A prime number is a number greater than 1 that has no divisors other than 1 and itself.

// To determine if a number is not prime, we check whether it can be divided evenly by any number between 2 and num - 1. If it can, then it has a divisor other than 1 and itself, making it composite.
// Why Stop at num - 1?
// Avoid Redundancy:

// Numbers 1 and num are excluded because:
// Every number is divisible by 1 (trivial case).
// Dividing num by itself always gives 1 (trivial case).
// These cases don't help distinguish between prime and composite numbers.
// Efficient Check for Non-Primality:

// The key to determining primality is checking whether there exists any other divisor (besides 1 and num itself). This is achieved by examining numbers in the range 2 to num - 1.
// Example
// If num = 7:
// The loop checks divisors i = 2, 3, 4, 5, 6.
// If no number in this range divides 7 evenly, 7 is declared prime.