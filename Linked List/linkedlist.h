#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

class linkedlist
{
    public:
        Node* head;
        linkedlist();

        void append(Node* node);
        void prepend(Node* node);
        void insert_at(Node* node, int pos);
        void remove(int data);
        void remove_at(int pos);
        void reverse();
        void print();
        void clear();
        void sort();

        Node* search(int term);
        int size();
        bool is_empty();

        




};

#endif // FILENAM