#include <iostream>
// #include <conio.h>
using namespace std;

class Node
{
public:
    int data;
    Node *NextAdd;
};

class LinkedList
{
public:
    Node *head = NULL;
    void Insert()
    {
        int n;
        cout << "Enter Value: " << endl;
        cin >> n;
        Node *NewNode = new Node;
        NewNode->data = n;
        NewNode->NextAdd = NULL;
        if (head == NULL)
        {
            head = NewNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->NextAdd != NULL)
            {
                ptr = ptr->NextAdd;
            }
            ptr->NextAdd = NewNode;
        }
        cout << "New Node Inserted Successfully" << endl;
    }
    void count()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty" << endl;
        }
        else
        {
            int n = 0;
            Node *ptr = head;
            while (ptr != NULL)
            {
                n++;
                ptr = ptr->NextAdd;
            }
            cout << "Total Nodes: " << n << endl;
        }
    }

    void search()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty" << endl;
        }
        else
        {
            int n, found = 0;
            cout << "Enter Value for search: " << endl;
            cin >> n;
            Node *ptr = head;
            while (ptr != NULL)
            {
                if (n == ptr->data)
                {
                    found++;
                    cout << " Value is Found" << endl;
                    break;
                }
                ptr = ptr->NextAdd;
            }
            if (found == 0)
            {
                cout << "Value " << n << " Can't Found";
            }
        }
    }

    void update()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty" << endl;
        }
        else
        {
            int n, found = 0;
            cout << "Enter Value For Updation: " << endl;
            cin >> n;
            Node *ptr = head;
            while (ptr != NULL)
            {
                if (n == ptr->data)
                {
                    cout << "Enter New Value: " << endl;
                    cin >> ptr->data;
                    found++;
                    cout << " Value Updated Successfully" << endl;
                    break;
                }
                ptr = ptr->NextAdd;
            }
            if (found == 0)
            {
                cout << "Value " << n << " Can't found" << endl;
            }
        }
    }

    void del()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty" << endl;
        }
        else
        {
            int n, found = 0;
            cout << "Enter Value for deletion" << endl;
            cin >> n;
            if (n == head->data)
            {
                Node *ptr = head;
                head = head->NextAdd;
                delete ptr;
                cout << "Node deleted successfully" << endl;
                found++;
            }
            else
            {
                // 1 2 3
                Node *pre = head;
                Node *ptr = head->NextAdd;
                while (ptr != NULL)
                {
                    if (n == ptr->data)
                    {
                        pre->NextAdd = ptr->NextAdd;
                        delete ptr;
                        found++;
                        cout << "Node deleted" << endl;
                        break;
                    }
                    pre = ptr;
                    ptr = ptr->NextAdd;
                }
            }
            if (found == 0)
            {
                cout << "Value " << n << " Can't found" << endl;
            }
        }
    }
    void show()
    {

        if (head == NULL)
        {
            cout << "Linked List is Empty" << endl;
        }
        else
        {
            Node *ptr = head;
            while (ptr != NULL)
            {
                cout << " " << ptr->data;
                ptr = ptr->NextAdd;
            }
        }
    }
};

main()
{
    LinkedList obj;
p:
    system("cls");
    int choice;
    cout << "1. Insert Node" << endl;
    cout << "2. Count Node" << endl;
    cout << "3. Search Node" << endl;
    cout << "4. Update Node" << endl;
    cout << "5. Delete Node" << endl;
    cout << "6. Show Node" << endl;
    cout << "7. Exit " << endl;
    cout << "Your Choice: " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        obj.Insert();
        break;

    case 2:
        obj.count();
        break;
    case 3:
        obj.search();
        break;
    case 4:
        obj.update();
        break;
    case 5:
        obj.del();
        break;
    case 6:
        obj.show();
        break;
    case 7:
        exit(0);
    default:
        cout << "Invalid Input" << endl;
    }
    // getch();
    goto p;
    return 0;
}