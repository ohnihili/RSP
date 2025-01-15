#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "treenode.h"

class binarytree
{
    public:
        node* root;
        binarytree();
        void insert(int n);
        void remove(int n);

        node* bfs(int n);
        node* dfs(int n);
        node* dfs(int n, node* v);
        
        int number_of_nodes();
        
        void preorder(node* root);
        void inorder(node* root);
        void postorder(node* root);

};

#endif // BINARYTREE_H
