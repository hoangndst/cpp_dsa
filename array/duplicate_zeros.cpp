#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int s = arr.size();
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                arr.insert(arr.begin(), 0);
            }
        }
        arr.erase(arr.end() - s, arr.end());
    }
};

int main() {


    vector<int> vect(10);   
    for (int i = 0; i < 10; i++) {
        cin >> vect[i];
    }

    int s = vect.size();
    for (int i = 0; i < 10; i++) {
        if (vect[i] == 0) {
            vect.insert(vect.begin() + i, 0);
            i++;
        }
    }
    vector<int>::iterator itr1, itr2;
    itr1 = vect.begin() + s;
    itr2 = vect.end();
    vect.erase(itr1, itr2);
    
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }

    return 0;
}

