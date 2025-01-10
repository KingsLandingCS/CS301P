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
        else
        {
            return true;
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

// Let’s walk through the program execution step by step with a detailed visualization of each iteration for the range [2, 10]. I'll explain what happens in both the main function and the isPrime function.

// Setup
// The program starts in the main function.
// Variables a and b are initialized:
// cpp
// Copy code
// int a = 2, b = 10;
// The for loop begins:
// cpp
// Copy code
// for (int i = a; i <= b; i++)
// This will iterate through all numbers from 2 to 10 (inclusive), calling isPrime for each number.
// Iteration 1: i = 2
// The main function calls isPrime(2):
// cpp
// Copy code
// if (isPrime(2)) // Passes 2 to isPrime
// Inside the isPrime function:
// num = 2
// Check if num < 2:
// cpp
// Copy code
// if (num < 2) // False, since 2 is not less than 2
// Loop from 2 to num - 1:
// cpp
// Copy code
// for (int i = 2; i <= (num - 1); i++) // i = 2; i <= 1
// Since num - 1 = 1, the loop does not execute (no numbers to check divisors for).
// Return true:
// cpp
// Copy code
// return true; // 2 is prime
// Back in main, 2 is printed:
// cpp
// Copy code
// cout << 2 << " " << endl;
// Iteration 2: i = 3
// The main function calls isPrime(3):
// cpp
// Copy code
// if (isPrime(3)) // Passes 3 to isPrime
// Inside the isPrime function:
// num = 3
// Check if num < 2:
// cpp
// Copy code
// if (num < 2) // False, since 3 is not less than 2
// Loop from 2 to num - 1:
// cpp
// Copy code
// for (int i = 2; i <= (num - 1); i++) // i = 2; i <= 2
// First (and only) iteration of the loop:
// Check if 3 % 2 == 0:
// cpp
// Copy code
// if (num % i == 0) // 3 % 2 == 1, so False
// Loop ends (no divisors found).
// Return true:
// cpp
// Copy code
// return true; // 3 is prime
// Back in main, 3 is printed:
// cpp
// Copy code
// cout << 3 << " " << endl;
// Iteration 3: i = 4
// The main function calls isPrime(4):
// cpp
// Copy code
// if (isPrime(4)) // Passes 4 to isPrime
// Inside the isPrime function:
// num = 4
// Check if num < 2:
// cpp
// Copy code
// if (num < 2) // False, since 4 is not less than 2
// Loop from 2 to num - 1:
// cpp
// Copy code
// for (int i = 2; i <= (num - 1); i++) // i = 2; i <= 3
// First iteration of the loop:
// Check if 4 % 2 == 0:
// cpp
// Copy code
// if (num % i == 0) // 4 % 2 == 0, so True
// Since True, return false (4 is not prime):
// cpp
// Copy code
// return false; // 4 is composite
// Back in main, nothing is printed for 4.
// Iteration 4: i = 5
// The main function calls isPrime(5):
// cpp
// Copy code
// if (isPrime(5)) // Passes 5 to isPrime
// Inside the isPrime function:
// num = 5
// Check if num < 2:
// cpp
// Copy code
// if (num < 2) // False, since 5 is not less than 2
// Loop from 2 to num - 1:
// cpp
// Copy code
// for (int i = 2; i <= (num - 1); i++) // i = 2; i <= 4
// First iteration of the loop:
// Check if 5 % 2 == 0:
// cpp
// Copy code
// if (num % i == 0) // 5 % 2 == 1, so False
// Second iteration of the loop:
// Check if 5 % 3 == 0:
// cpp
// Copy code
// if (num % i == 0) // 5 % 3 == 2, so False
// Loop ends (no divisors found).
// Return true:
// cpp
// Copy code
// return true; // 5 is prime
// Back in main, 5 is printed:
// cpp
// Copy code
// cout << 5 << " " << endl;
// Iteration 5: i = 6
// The main function calls isPrime(6):
// cpp
// Copy code
// if (isPrime(6)) // Passes 6 to isPrime
// Inside the isPrime function:
// num = 6
// Check if num < 2:
// cpp
// Copy code
// if (num < 2) // False, since 6 is not less than 2
// Loop from 2 to num - 1:
// cpp
// Copy code
// for (int i = 2; i <= (num - 1); i++) // i = 2; i <= 5
// First iteration of the loop:
// Check if 6 % 2 == 0:
// cpp
// Copy code
// if (num % i == 0) // 6 % 2 == 0, so True
// Since True, return false (6 is not prime):
// cpp
// Copy code
// return false; // 6 is composite
// Back in main, nothing is printed for 6.
// Remaining Iterations
// i = 7: Loop runs, finds no divisors, prints 7.
// i = 8: Loop runs, finds divisor 2, skips printing.
// i = 9: Loop runs, finds divisor 3, skips printing.
// i = 10: Loop runs, finds divisor 2, skips printing.
// Output
// The program outputs:

// Copy code
// 2
// 3
// 5
// 7