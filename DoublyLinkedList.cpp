#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};

int main()
{

    Node *head = NULL;

    // Insert at start

    // LinkedList doesn't exist
    if (head == NULL)
    {
        head = new Node(5);
    }

    else
    {
        Node *temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    Node *trav = head;

    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}