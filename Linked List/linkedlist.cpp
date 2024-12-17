#include "linkedlist.h"
#include <iostream>


linkedlist::linkedlist()
{
    head = nullptr;
}

void linkedlist::append(Node* node)
{
    if (head == nullptr)
    {
        head = node;
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

    return;
}

void linkedlist::prepend(Node* node)
{
    if (head == nullptr)
    {
        head = node;
        return;
    }

    Node* temp = head;
    head = node;
    head->next = temp;
    return;

}

void linkedlist::insert_at(Node* node, int pos)
{
    if (pos < 0)
    {
        std::cout << "Invalid position\n";
        return; 
    }
    else if (pos == 0)
    {
        prepend(node);
        return;
    }

    int curr = 0;
    Node* temp = head;

    while (temp != nullptr && curr < pos - 1) 
    {
        temp = temp->next;
        curr++;
    }

    if (temp == nullptr) 
    {
        std::cout << "Invalid position\n";
        return;
    }

    node->next = temp->next;
    temp->next = node;

    return;
}

void linkedlist::remove(int data)
{
    if (is_empty())
    {
        std::cout << "Empty List. \n";
        return;
    }

    Node* temp = head;
    if (head->data == data)
    {
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != data)
    {
        current = current->next;
    }

    if (current->next == nullptr)
    {
        std::cout << "Node not found\n";
        return;
    }

    temp = current->next;
    current->next = current->next->next;
    delete temp;
    return;
}

void linkedlist::remove_at(int pos)
{
    Node* temp = head;

    if (pos < 0)
    {
        std::cout << "Invalid position\n";
        return; 
    }
    else if (pos == 0)
    {
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    int curr = 0;
    while (current != nullptr && curr < pos - 1) 
    {
        current = current->next;
        curr++;
    }

    if (current == nullptr) 
    {
        std::cout << "Invalid position\n";
        return;
    }

    temp = current->next;
    current->next = current->next->next;

    return;
}

void linkedlist::print()
{
    if (is_empty())
    {
        std::cout << "Empty List. \n";
        return;
    }

    Node* temp = head;

    while (temp != nullptr)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }

}

void linkedlist::clear()
{
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return;
}

Node* linkedlist::search(int term)
{
    if (is_empty())
    {
        std::cout << "Empty List. \n";
        return nullptr;
    }

    Node *temp = head;
    int pos = -1;
    int data = 0;
    while(temp->next != nullptr)
    {
        pos++;
        data = temp->data;
        if (data == term)
            return temp;
        temp=temp->next;
    }

    return nullptr;
}

int linkedlist::size()
{
    Node* temp = head;
    int count = 1;

    if (temp == nullptr)
        return 0;
    while(temp->next != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

bool linkedlist::is_empty()
{
    return head == nullptr;
}

