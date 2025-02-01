#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNumber;
    float gpa;
};

int main()
{
    Student x1;
    x1.name = "Underwood";
    // x1.rollNumber = 76;
    x1.gpa = 2.9;
    cout << "enter roll number";
    cin >> x1.rollNumber;

    Student x2;
    x2.name = "SilverStone";
    x2.rollNumber = 55;
    x2.gpa = 2.89;

    cout << x1.name << " " << x1.rollNumber << " " << x1.gpa << endl;
    cout << x2.name << " " << x2.rollNumber << " " << x2.gpa << endl;

    return 0;
}