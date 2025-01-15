#include "treenode.h"

node::node()
{
    data = 0;
    left = nullptr;
    right = nullptr;
}

node::node(int data)
{
    this->data = data;
    left = nullptr;
    right = nullptr;
}