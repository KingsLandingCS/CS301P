#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int val)
    {
        data = val;  // assigns the argument 'val' to the member variable 'data'
        next = NULL; // sets the 'next' pointer to null (it doesn’t point to any node yet)
    }
};

class LinkedList
{
public:
    Node *head; // Node *head; → a pointer to the first node

    // constructor
    LinkedList()
    {
        head = NULL; // initially empty
    }

    // Add a node at the end
    void append(int val)
    {
        Node *newNode = new Node(val); // Creates a new Node object on the heap. Calls the Node constructor: newNode → [ data: 10 | next: NULL ] This node is not yet connected to the list. It’s floating for now.

        // case 1: list is empty
        if (head == NULL)
        {
            head = newNode; // head is also the first node with a NULL ptr | head → [ 10 | NULL ]
            return;
        } // And then return; ends the function — because we’ve added our first node.

        // case 2: list already has elements
        Node *temp = head;         // Both head and temp point to the first node. But we use temp because we don’t want to move head — head should always stay at the beginning of the list.
        while (temp->next != NULL) // move to last node
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Display all nodes

    void display()
    {
        Node *temp = head;
        cout << "Linked List: ";
        while (temp != NULL)
        {
            cout << temp->data << " ->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;

    list.append(10); // add 10
    list.append(20); // add 20
    list.append(30); // add 30

    list.display(); // show all elemenets
    return 0;
}