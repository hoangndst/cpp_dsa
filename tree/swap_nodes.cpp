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

