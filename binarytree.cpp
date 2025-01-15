#include <iostream>
#include <queue>
#include "binarytree.h"

using std::queue;
using std::cout;
using std::endl;

binarytree::binarytree()
{
    root = nullptr;
}

void binarytree::insert(int n)
{
    node* v = new node(n);

    if (root == nullptr)
    {
        root = v;
        return;
    }

    queue<node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if (temp->left == nullptr)
        {
            temp->left =  v;
            return;
        } else
        {
            q.push(temp->left);
        }
        
        if (temp->right == nullptr)
        {
            temp->right =  v;
            return;
        } else
        {
            q.push(temp->right);
        }
    }
}

node* binarytree::bfs(int n)
{
    if (n == root->data)
        return root;
    
    queue<node*> q;
    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();

        cout << temp->data << endl;

        q.pop();

        if (temp->data == n)
        {
            return temp->left;
        } else
        {
            q.push(temp->left);
        }
        
        if (temp->data == n)
        {
            return temp->right;
        } else
        {
            q.push(temp->right);
        }
    }
    return nullptr;
}

node* binarytree::dfs(int n)
{
    return dfs(n, root);
}

node* binarytree::dfs(int n, node* v)
{
    if (v == nullptr)
        return nullptr;

    cout << v->data << " ";

    if (n == v->data)
        return v;

    node* leftResult = dfs(n, v->left);
    if (leftResult != nullptr) 
    {
        return leftResult;
    }

    node* rightResult = dfs(n, v->right);
    if (rightResult != nullptr) 
    {
        return rightResult;
    }


    return nullptr;
}

void binarytree::remove(int n)
{
    if (root == nullptr)
    {
        cout << "Empty Tree" << endl;
        return;
    }
    
    node* target = nullptr;
    node* lastParent = nullptr;
    node* last = nullptr;

    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if (temp->data == n) {
            target = temp;
        }

          if (temp->left) {
            lastParent = temp;
            last = temp->left;
            q.push(temp->left);
        }

        if (temp->right) {
            lastParent = temp;
            last = temp->right;
            q.push(temp->right);
        }
    }

    if (target == nullptr) {
        cout << "Node not found" << endl;
        return;
    }

    target->data = last->data;

    if (lastParent) {
        if (lastParent->left == last) {
            lastParent->left = nullptr;
        } else if (lastParent->right == last) {
            lastParent->right = nullptr;
        }
    } else {

        root = nullptr;
    }

    delete last;
}


int binarytree::number_of_nodes()
{
    int count = 0;

    if (root == nullptr)
        return count;
    
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        count++;
        node* temp = q.front();
        q.pop();
        if (temp->left != nullptr)
            q.push(temp->left);
        if (temp->right != nullptr)
            q.push(temp->right);
    }

    return count;
}

void binarytree::preorder(node* root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void binarytree::inorder(node* root)
{
    if (root == nullptr)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void binarytree::postorder(node* root)
{
    if (root == nullptr)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


