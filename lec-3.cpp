#include <iostream>

using namespace std;

int size = 0;

class Node
{
public:
    int data;
    Node *nextAdd;
    void setData(int n)
    {
        data = n;
    }

    int getData()
    {
        return data;
    }

    void setNext(Node *next)
    {
        nextAdd = next;
    }
    Node *getNext()
    {
        return nextAdd;
    }
};

class List
{
public:
    Node *head;
    Node *lastNode;

    List()
    {
        head = NULL;
        lastNode = NULL;
    }

    void add()
    {
        int n;
        cout << "Enter Value: ";
        cin >> n;

        Node *currentNode = new Node;
        currentNode->setData(n);
        currentNode->setNext(NULL);

        if (head == NULL)
        {
            head = currentNode;
            lastNode = currentNode;
        }
        else
        {
            lastNode->setNext(currentNode);
            lastNode = currentNode;
        }
        size++;
        cout << "New Node Inserted" << endl;
    }
};

int main()
{
    List obj;
    obj.add();
    obj.add();
    obj.add();

    return 0;
}