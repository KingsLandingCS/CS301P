#include <iostream>
using namespace std;
template <class T>

class Stack
{
private:
    T a, b;

public:
    void inputA(T x);
    void inputB(T y);
    void output();
};

template <class T>
void Stack<T>::inputA(T x)
{
    a = x;
}

template <class T>
void Stack<T>::inputB(T y)
{
    b = y;
}

template <class T>
void Stack<T>::output()
{
    cout << a << " " << b << endl;
}

int main()
{
    Stack<int> obj;
    obj.inputA(25);
    obj.inputB(50);
    obj.output();

    return 0;
}