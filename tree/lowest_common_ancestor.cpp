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

Node *lowestCommonAncestor(Node *root, int v1, int v2) {
    
    while (root) {
        if (root->data >= v1 && root->data >= v2) {
            root = root->left;
        } else if (root->data < v1 && root->data < v2) {
            root = root->right;
        }
        else break;
    }
    return root;
}
// Time Complexity: O(h). 
// The Time Complexity of the above solution is O(h), where h is the height of the tree.
// Space Complexity: O(1). 
// The space complexity of the above solution is constant.