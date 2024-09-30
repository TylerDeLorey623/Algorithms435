// Prevents multiple inclusions of same header file
#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

// Public Node class for the linked list implementation of a stack and a queue
class Node 
{
    public:
        // Holds the item name for this node
        char data;

        // Pointer that points to the next node
        Node* next;

        // Declares parameterized constructor (defined in Node.cpp)
        Node(char value)
        {
            this->data = value;
            this->next = nullptr;
        }
};

#endif