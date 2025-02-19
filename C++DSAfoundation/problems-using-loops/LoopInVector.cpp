#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // for loop
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
        // cin>>array[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int ele : v)
    {
        cout << ele << " ";
    }

    cout << endl;

    return 0;
}

// Function of int ele : v
// ele is a loop variable that takes the value of each element in v one by one.
// v is the vector being iterated over.
// The loop iterates over all elements in v, assigning each element's value to ele in each iteration.
// It is equivalent to a traditional for loop using an index (i), but more concise.



// for (int ele : v)
// {
//     cout << ele << " ";
// }
// is an example of a range-based for loop (introduced in C++11). It simplifies iteration over containers like std::vector, std::array, std::list, etc.