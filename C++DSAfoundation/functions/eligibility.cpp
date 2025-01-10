#include <iostream>
using namespace std;

bool checkEligible(int age, int limit)
{
    if (age >= limit)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int votingLimit = 18;
    int isEligibleForVoting = checkEligible(15, votingLimit);
    if (isEligibleForVoting)
    {
        cout << "Yes the current person is eligible to vote" << endl;
    }
    else
    {
        cout << "No, the current person is not eligible to vote " << endl;
    }

    return 0;
}