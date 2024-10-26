#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

class linkedlist
{
    public:
        Node* head;
        linkedlist();

        void insert(Node* node);
        int search(int term);

};

#endif // FILENAM