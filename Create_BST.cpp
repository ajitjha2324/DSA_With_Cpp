#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insert(Node *root, int val)
{
    if (root = NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

void inorder(Node *root)
{
    if (!root)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    vector<int> vec = {50, 30, 70, 20, 40, 60, 80};
    Node *root = NULL;

    for (int val : vec)
    {
        root = insert(root, val);
    }

    cout << "Inorder Traversal of BST";
    inorder(root);
    cout << endl;
    return 0;
}