#include "linkedlist.h"
#include <iostream>


linkedlist::linkedlist()
{
    head = nullptr;
}

int linkedlist::search(int term)
{
    Node *temp = head;
    int pos = -1;
    int data = 0;
    while(temp->next != nullptr)
    {
        pos++;
        data = temp->data;
        if (data == term)
            return pos;
        temp=temp->next;
    }

    return -1;
}

void linkedlist::insert(Node* node)
{
    if (head == nullptr)
    {
        head = node;
        std::cout << "Node added at head." << std::endl;
        return;
    }
    int count = 1;
    Node* temp = head;
    while (temp->next != nullptr)
    {
        count++;
        temp = temp->next;
    }
    temp->next = node;
    std::cout << "Node added at position: " << count << std::endl;

    return;
}