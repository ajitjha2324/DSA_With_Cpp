#include <iostream>
#include <queue>
using namespace std;

// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// int main()
// {
//     int x; // Root
//     cout << "Enter Value of Root" << endl;
//     cin >> x;
//     int first, second; // Left & Right
//     queue<node *> q;
//     node *root = new node(x);
//     q.push(root);
//     // Build Binary Tree
//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();
//         cout << "Enter the left child of " << temp ->data << " ";
//         cin >> first;
//         // Left Node
//         if (first != -1)
//         {
//             temp->left = new node(first);
//             q.push(temp->left);
//         }
//         // Right Node
//         cout << "Enter the right child of " << temp ->data << " ";
//         cin >> second;
//         if (second != -1)
//         {
//             temp->right = new node(second);
//             q.push(temp->right);
//         }
//     }
// }

/* WORST CASE TIME COMPLEXITY -> O(n) */
/* BEST CASE SPACE COMPLEXITY -> O(h) Height of Tree */
/* WORST CASE SPACE COMPLEXITY -> O(n) */


class Node{
    public:
    int data;
    Node *left, *right;

    Node(int value){
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node * BinaryTree(){
    int x;
    cout<<"Enter Root Value : "<<endl;
    cin>>x;

    if(x == -1){
        return NULL;
    }

    Node *temp = new Node(x);
    //Left Child
    cout<<"Enter Left Child of : "<<x<<" "; 
    temp->left = BinaryTree();
    //Right Child
    cout<<"Enter Right Child of : "<<x<<" ";
    temp->right = BinaryTree();
    return temp;
}

int main(){
    cout<<"Enter The Root Node :";
    Node *root;
    root = BinaryTree();
}