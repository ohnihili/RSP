#include <iostream>
#include "binarytree.h"

int main()
{
    binarytree t;
    binarytree y;

    t.insert(1);
    t.insert(2);
    t.insert(3);
    t.insert(4);
    t.insert(5);
    t.insert(6);
    t.insert(7);
    t.insert(8);
    t.insert(9);
    t.insert(10);
    t.insert(11);
    t.insert(12);
    t.insert(13);

    t.bfs(13);

    t.remove(10);

    t.bfs(12);

    t.dfs(6);

}