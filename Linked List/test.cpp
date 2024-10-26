#include "linkedlist.h"
#include <iostream>

int main()
{
    linkedlist l1;
    Node* n1 = new Node(5);
    Node* n2 = new Node(10);
    Node* n3 = new Node(15);
    Node* n4 = new Node(16);
    Node* n5 = new Node(17);

    l1.insert(n1);
    l1.insert(n2);
    l1.insert(n3);
    l1.insert(n4);
    l1.insert(n5);
    
    int pos = l1.search(5);
    int pos2 = l1.search(16);
    std::cout << "pos of 5: " << pos << " pos of 16: " << pos2 << std::endl;

}



