#ifndef NODE_H
#define NODE_H

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