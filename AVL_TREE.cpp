#include <iostream>
using namespace std;

class Node{
    public:
    int data, height;
    Node *left, *right;

    Node(int value){
        data = value;
        height = 1;
        left = right = NULL;
    }
};

int getHeight(Node* root){
    if(!root)
    return 0;

    return root->height;
}

int getBalance(Node* root){
    return getHeight(root->left)-getHeight(root->right);
}

// Right Rotation
Node* rightRotation(Node* root){
    Node* child = root->left;
    Node* childRight = child->right;

    child->right = root;
    root->left = childRight;

    // Update Height
    root->height = 1+max(getHeight(root->left), getHeight(root->right));
    child->height = 1+max(getHeight(child->left), getHeight(child->right));

    return child;
}

// Left Rotation
Node* leftRotation(Node* root){
    Node* child = root->right;
    Node* childLeft = child->left;

    child->left = root;
    root->right = childLeft;

    // Update Height
    root->height = 1+max(getHeight(root->left), getHeight(root->right));
    child->height = 1+max(getHeight(child->left), getHeight(child->right));

    return child;
}

Node* insert(Node* root, int key){
    // Doesn't Exist
    if(!root)
    return new Node(key);
    
    // Exist
    if(key < root->data){
        root->left = insert(root->left, key);
    }
    else if(key > root->data){
        root->right = insert(root->right, key);
    }
    else{               // Duplicate Element
        return root;
    }

    // Update Height
    root->height = 1+max(getHeight(root->left), getHeight(root->right));

    // Check whether Tree is Balanced or Not
    int balance = getBalance(root);

    // Left Left Case
    if(balance > 1 && key < root->left->data)
        return rightRotation(root);

    // Right Right Case
    else if(balance < -1 && root->right->data < key)
        return leftRotation(root);

    // Left Right Case
    else if(balance > 1 && key > root->left->data){
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }

    // Right Left Case
    else if(balance < -1 && root->right->data > key){
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }

    //  No Unbalancing
    else{
        return root;
    }
}

void preorder(Node* root){
    if(!root)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void Inorder(Node* root){
    if(!root)
    return;

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main(){
    //Duplicate Element Not Alowed

    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 50);
    root = insert(root, 70);
    root = insert(root, 5);
    root = insert(root, 100);
    root = insert(root, 95);

    cout<<"preorder: "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Inorder: "<<endl;
    Inorder(root);

}