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

void levelOrder(Node * root) {
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node* node = q.front();
        q.pop();
        cout << node->data << " ";
        if(node->left != NULL) q.push(node->left);
        if(node->right != NULL) q.push(node->right);
    }
}