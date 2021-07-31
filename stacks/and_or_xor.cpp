#include <bits/stdc++.h>
using namespace std;
int main() {

    vector<int> v;
    stack<int> s;
    int n; cin >> n;
    int min = 0, max = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < n; i++) {
        while (!s.empty()) {
            min = v[i] ^ s.top();
            if (min > max) {
                max = min;
            }
            if (v[i] < s.top()) {
                s.pop();
            }
            else break;
        }
        s.push(v[i]);
    }
    cout << max << endl;

    return 0;
}