#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void append(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display()
    {
        Node *temp = head;
        cout << "Linked List Structure:\n";
        while (temp != NULL)
        {
            cout << "[ Node at: " << temp     // address of the current node
                 << " | data: " << temp->data // data stored in node
                 << " | next: " << temp->next // address of next node
                 << " ]" << endl;
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);

    list.display();
    return 0;
}
