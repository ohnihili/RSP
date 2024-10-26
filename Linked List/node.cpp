#include "node.h"

Node::Node()
{
    next = nullptr;
    data = 0;
}

Node::Node(int data)
{
    this->data = data;
}