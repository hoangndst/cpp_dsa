#include <bits/stdc++.h>
using namespace std;
int marsExploration(string s) {
    int n = s.size() / 3;
    int res = 0;
    int i = 0;
    while (n--) {
        string tmp = s.substr(i, 3);
        cout << tmp << endl;
        if (tmp[0] != 'S') res++;
        if (tmp[1] != 'O') res++;
        if (tmp[2] != 'S') res++;
        i += 3;
    }
    return res;
}

string hackerrankInString(string s) {
    string tmp = "hackerrank";
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == tmp[j]) {
            j++;
        }
    }
    if (j == tmp.size()) return "YES";
    else return "NO";
}


int surfaceArea(vector<vector<int>> A) {
    int n = A.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        
    }
    
}




int main() {
    string s;
    getline(cin, s);
    return 0;
}