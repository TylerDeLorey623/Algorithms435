#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "./Node.h"

using namespace std;

// Public Queue class for linked list implementation of a queue
class Queue 
{
    public:
        Node* head = nullptr;
        Node* tail = nullptr;

        // Enqueue O(1)
        void enqueue(char item)
        {
            Node* newNode = new Node(item);

            if (isEmpty())
            {
                head = newNode;
            }
            else
            {
                tail->next = newNode;
            }

            tail = newNode;
            return;
        }

        // Dequeue O(1)
        char dequeue()
        {
            char dequeuedItem;
            if (!isEmpty())
            {
                dequeuedItem = head->data;
                Node *temp = head;
                head = head->next;

                // Free memory when dequeuing the Node
                delete(temp);
            }

            return dequeuedItem;
        }

        // isEmpty O(1)
        bool isEmpty()
        {
            return (head == nullptr);
        }

        // Temp display O(n)
        void display()
        {
            Node* curr = head;
            while (curr != NULL)
            {
                cout << curr->data + " ";
                curr = curr->next;
            }
            cout << endl;
        }
};

#endif