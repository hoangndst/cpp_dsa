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
// top view of binary tree
void fillMap(Node* root, int dist, int level, map<int, pair<int, int>>& m) { 
    if(root == NULL) return;
    if(m.count(dist) == 0) {
        m[dist] = make_pair(root->data, level);
    } else if (m[dist].second > level) { // for bottom view: m[dist].second < level
        m[dist] = make_pair(root->data, level);
    }
    fillMap(root->left, dist - 1, level + 1, m);
    fillMap(root->right, dist + 1, level + 1, m);
}
void topView (Node *root) {
    map<int, pair<int, int>> m;
    fillMap(root, 0, 0, m);
    for (auto m = m.begin(); m != m.end(); m++) {
        cout << m->second.fist << " ";
    }
}

// 