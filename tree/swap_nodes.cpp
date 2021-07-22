#include <bits/stdc++.h>
using namespace std;
void printInorder(int root, vector<int> &left, vector<int> &right) {
    if(root == -1) return;
    printInorder(left[root - 1], left, right);
    cout << root << " ";
    printInorder(right[root - 1], left, right);
}
void swapNodes(vector<vector<int>> indexes, vector<int> queries) {
    vector<int> left;
    vector<int> right;
    for (int i = 0; i < indexes.size(); i++) {
        left.push_back(indexes[i][0]);
        right.push_back(indexes[i][1]);
    }   
    for (int i = 0; i < queries.size(); i++) {
        queue<int> q;
        q.push(1);
        int level = 0;
        int k = queries[i];
        while(!q.empty()) {
            level++;
            int count = q.size();
            while(count--) {
                int p = q.front() - 1;
                q.pop();
                if (level %k == 0) {
                    swap(left[p], right[p]);
                }
                if (left[p] != -1) {
                    q.push(left[p]);
                }
                if (right[p] != -1) {
                    q.push(right[p]);
                }
            }
        }
        printInorder(1, left, right);
    }

}
int main() {

    int n;
    vector<vector<int>> indexes;
    vector<int> queries;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        indexes.push_back({a, b});
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        queries.push_back(k);
    }
    swapNodes(indexes, queries);
    return 0;
}