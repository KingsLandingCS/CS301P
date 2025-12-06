#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *Next;

public:
    void setData(int n)
    {
        data = n;
    }
    int getData()
    {
        return data;
    }

    void setNext(Node *n)
    {
        Next = n;
    }

    Node *getNext()
    {
        return Next;
    }
};

class List
{
private:
    Node *headNode;
    Node *lastNode;

public:
    List()
    {
        headNode = NULL;
        lastNode = NULL;
    }

    void add(int n)
    {
        Node *currentNode = new Node;
        currentNode->setData(n);
        currentNode->setNext(NULL);
        if (headNode == NULL)
        {
            headNode = currentNode;
            lastNode = currentNode;
            currentNode->setNext(currentNode);
        }
        else
        {
            lastNode->setNext(currentNode);
            currentNode->setNext(headNode);
            lastNode = currentNode;
        }
    }

    void show()
    {
        int size = 10;
        Node *pre = NULL;
        Node *ptr = headNode;
        while (size > 1)
        {
            for (int i = 1; i <= 3; i++)
            {
                pre = ptr;
                ptr = ptr->getNext();
            }
            ptr = remove(pre, ptr);
            size--;
        }
        cout << "\n leader is: " << ptr->getData();
    }
    Node *remove(Node *pre, Node *ptr)
    {
        if (ptr == headNode)
        {
            headNode = headNode->getNext();
            lastNode->setNext(headNode);
            pre = ptr->getNext();
            delete ptr;
            return pre;
        }
        else if (ptr == lastNode)
        {
            lastNode = pre;
            lastNode->setNext(headNode);
            delete ptr;
            return headNode;
        }
        else
        {
            pre->setNext(ptr->getNext());
            pre = ptr->getNext();
            delete ptr;
            return pre;
        }
    }
};

int main()
{
    List obj;
    for (int i = 1; i <= 10; i++)
    {
        obj.add(i);
    }
    obj.show();
    return 0;
}