#include <bits/stdc++.h>
using namespace std;
 
// Structure of binary tree
struct Node {
    Node* left;
    Node* right;
    int data;
};
 
// function to create a new node
Node* newNode(int key) {
    Node* node = new Node();
    node->left = node->right = NULL;
    node->data = key;
    return node;
}

Node *insert(Node* root, int data) {
    if(root == NULL) {
        root = newNode(data);
        return root;
    }
    else {
        if (data <= root->data) {
            root->left = insert(root->left, data);
        }
        if (data > root->data) {
            root->right = insert(root->right, data);
        }
    }
    return root;
}

