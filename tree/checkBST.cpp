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
bool checkBST(Node* root) {
    return checkBSTUntil(root, INT_MIN, INT_MAX);
}

bool checkBSTUntil(Node* root, int min, int max) {
    if(root == NULL) {
        return true;
    }
    if(root->data < min || root->data > max) return false;
    return checkBSTUntil(root->left, min, root->data-1) && checkBSTUntil(root->right, root->data+1, max);
}