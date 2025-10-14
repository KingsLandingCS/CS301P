#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *pre;
    Node *next;

    void setData()
    {
        data = n;
    }
    void getData()
    {
        return data;
    }

    void setPrev(Node *p)
    {
        pre = p;
    }

    Node *getPrev()
    {
        return pre;
    }

    void setNext(Node *p)
    {
        pre = p;
    }

    Node *getNext()
    {
        return next;
    }
};

int main()
{

    return 0;
}