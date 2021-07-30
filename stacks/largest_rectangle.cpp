#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++) cin >> height[i];
    // help me to find the largest rectangle
    stack<int> s;
    int max_area = 0;
    vector<int> left(n);
    vector<int> right(n);
    for (int i = 0; i < n; i++) {
        if (s.empty() || height[i] > height[s.top()]) {
            s.push(i);
            left[i] = i;
        }
        else {
            while (!s.empty() && height[i] <= height[s.top()]) {
                s.pop();
            }
            left[i] = s.empty() ? 0 : s.top() + 1;
            s.push(i);
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    for (int i = n - 1; i >= 0; i--) {
        if (s.empty() || height[i] > height[s.top()]) {
            s.push(i);
            right[i] = i;
        }
        else {
            while (!s.empty() && height[i] <= height[s.top()]) {
                s.pop();
            }
            right[i] = s.empty() ? n - 1 : s.top() - 1;
            s.push(i);
        }
    }
    for (int i = 0; i < n; i++) {
        max_area = max(max_area, (right[i] - left[i] + 1) * height[i]);

    }

    cout << max_area << endl;


    return 0;
}
// hay vãi cả l