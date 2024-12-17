#ifndef NODE_H
#define NODE_H

class node
{
    friend class binarytree;
    private:
        int data;
        node* left;
        node* right;

    public:
        node();
        node(int data);

};

#endif // NODE_H
