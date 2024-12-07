#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};                // Array declaration
    cout << "First element: " << arr[0] << endl; // Accessing element
    arr[2] = 10;                                 // Updating element
    cout << "Updated third element: " << arr[2] << endl;
    return 0;
}

// 5. Array
// Definition:
// An array is a contiguous block of memory that stores elements of the same data type. Each element is accessed using an index.

// Features:
// Fixed size.
// Efficient for accessing elements by index (O(1) time complexity).
// Inefficient for inserting and deleting elements (shifting required).

// Operations on Arrays:
// Access: Direct using index.
// Insert/Delete: Requires shifting elements.
// Traversal: Loop through all elements.

// 1. Introduction to Data Structures
// What is a Data Structure?
// A data structure is a way of organizing and storing data so it can be accessed and modified efficiently. Think of it as a container with rules about how data is stored, retrieved, and manipulated.

// Why Learn Data Structures?
// Efficiency: Using the right data structure can make programs faster and use less memory.
// Problem Solving: Different problems require different ways to organize data.
// Building Blocks: Data structures form the foundation for complex algorithms.
// Types of Data Structures:
// Primitive Data Structures: Built-in types like int, float, char.
// Non-Primitive Data Structures:
// Linear Structures: Arrays, Lists, Stacks, Queues.
// Non-Linear Structures: Trees, Graphs.
// Hash-based Structures: Hash tables and maps.
// 2. Selecting a Data Structure
// Key Considerations:
// Nature of Data:

// Is the data sequential or hierarchical?
// Example: Use arrays for sequential data; trees for hierarchical data.
// Operations Needed:

// Searching, inserting, deleting, sorting, traversing.
// Example: Use a hash table for fast lookup, but a sorted array for efficient range queries.
// Performance Requirements:

// Time complexity: How fast is the operation?
// Space complexity: How much memory does it use?
// Flexibility:

// Static vs. dynamic size.
// Example: Use arrays for fixed-size data, linked lists for dynamic size.
// 3. Data Structure Philosophy
// Core Philosophy:
// Abstract Data Types (ADTs): Focus on "what" the structure does, not "how" it does it.
// Examples: Lists, Stacks, Queues.
// Separation of Interface and Implementation:
// Interface: What operations can be performed.
// Implementation: How these operations are carried out.
// Design Principles:
// Modularity: Break the problem into manageable parts.
// Reusability: Design reusable data structures.
// Efficiency: Optimize for time and space.
// 4. Goals of This Course
// This course aims to:

// Teach Fundamental Data Structures: Arrays, Lists, Stacks, Queues, Trees, Graphs.
// Focus on Efficiency: Analyze operations using Big-O notation.
// Practical Applications: Understand where and how to use each data structure.
// Implement ADTs: Learn how to code different data structures in C++.
