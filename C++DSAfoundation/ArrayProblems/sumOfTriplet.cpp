#include <iostream>
using namespace std;

int main()
{
    //[3,1,2,4,0,6]
    // targetSum = 6

    int arr[] = {3, 1, 2, 4, 0, 6};
    int targetSum = 6;
    int size = 6;

    int triplet = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == targetSum)
                {
                    triplet++;
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }

    cout << "Total triplets: " << triplet << endl;

    return 0;
}
