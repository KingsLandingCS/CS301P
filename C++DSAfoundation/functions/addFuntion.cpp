#include <iostream>
using namespace std;

int addition(int x, int y)
{
    int result = x + y;
    cout << result << endl;
    return result;
}

void func(string name)
{
    cout << "Are you having fun " << name << " ?" << endl;
}

int main()
{
    func("Zubi");
    int response = addition(5, 6);
    cout << response << endl;
    // addition(12, 13);
    return 0;
}