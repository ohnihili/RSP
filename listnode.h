#ifndef LISTNODE_H
#define LISTNODE_H

class Node 
{
    friend class linkedlist;
    private:
        Node* next;
        int data;
    public:
        Node();
        Node(int data);
};

#endif // FILENAME_H