#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int m, n, max; cin >> m >> n >> max;
        vector<int> a(m), b(n);
        for (int i = 0; i < m; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        int ans = 0;
        int i = 0, j = 0, sum = 0, count = 0;
        while (i < m && sum + a[i] <= max) {
            sum += a[i];
            i++;
        }
        count = i; // important
        while (j < n && i >= 0) {
            sum += b[j];
            j++;
            while (i >= 0 && sum > max) {
                i--;
                sum -= a[i];
            }
            if (sum <= max && i + j > count) {
                count = i + j;
            }
        }
        cout << count << endl;
    }


    return 0;
}