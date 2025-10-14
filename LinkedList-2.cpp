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

        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

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

    void remove()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty" << endl;
        }
        else
        {
            int n;

            cout << "Enter Value for deletion: " << endl;
            cin >> n;

            if (n == head->data)
            {
                Node *ptr = head;
                head = head->next;
                delete ptr;
                cout << "First Node Deleted" << endl;
            }
            else
            {
                Node *pre = head;
                Node *ptr = head->next;
                while (ptr != NULL)
                {
                    if (n == ptr->data)
                    {
                        pre -> next 
                    }
                }
            }
        }
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