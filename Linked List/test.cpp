#include "linkedlist.h"
#include <iostream>

int main()
{
    linkedlist l1;
    linkedlist l2;

    Node* n1 = new Node(5);
    Node* n2 = new Node(10);
    Node* n3 = new Node(15);
    Node* n4 = new Node(16);
    Node* n5 = new Node(17);
    Node* n6 = new Node(1);
    Node* n7 = new Node(2);

    l1.append(n1);
    l1.append(n2);
    l1.append(n3);
    l1.append(n4);
    l1.append(n5);
    l1.insert_at(n7,5);

    l1.clear();

    l2.prepend(n6);
    l1.print();
    // l2.print();



    // l2.append(n6);
    
    // Node* s1 = l1.search(5);
    // Node* s2 = l1.search(16);

    // int size = l2.size();

    // std::cout << size << std::endl;

    // std::cout << l2.is_empty() << std::endl;
}



