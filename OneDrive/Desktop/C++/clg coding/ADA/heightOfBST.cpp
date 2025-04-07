#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

int height(node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        int ldepth = height(root->left);
        int rdepth = height(root->right);
        return max(ldepth + 1, rdepth + 1);
    }
}

node *newNode(int data)
{
    node *Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return Node;
}

int main()
{
    node *root;
    root = newNode(6);
    root->left = newNode(3);
    root->right = newNode(7);
    root->left->left = newNode(1);
    root->left->right = newNode(4);
    cout << height(root);
    return 0;
}