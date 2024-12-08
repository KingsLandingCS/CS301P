#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    return 0;
}

// Constraints of Array

// Array is a single memory block, which static
// Linked list is blocks of memory linked to eachother
// constraints of Array is that its length/size is static which can't be altered on runtime
// contiguous memory allocation
// In array inserting or deleting is costly O(N) ==> Linear space time complexity

// Advantages of a linked list

// dynamic length/size, can be altered on runtime
// non-contiguous blocks of memory, memory addresses are not adjacent or adjoined
// insertion and deletion is not costly

// ListNode

// block of memory => node
// this block has two parts, one data, second pointer to next node
// every node is pointing to its next node

// Types of linked lists
// singley linked lis, every node points to its next node

// Doubly linked list
// every node is also connected to its previous node

// circular linked list
//  the last node points to first/head node