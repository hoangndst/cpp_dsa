#include<bits/stdc++.h>
using namespace std;
void print(vector<int> vect){
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }
    cout << endl;
}

void insertionSort2(vector<int> &vect) {
    int i, j, temp;
    for (i = 1; i < vect.size(); i++) {
        print(vect);
        temp = vect[i];
        for (j = i - 1; j >= 0; j--) {
            if (vect[j] > temp) {
                vect[j + 1] = vect[j];   
            } else break;
        }
        vect[j + 1] = temp;
    }
}
int main() {
    vector<int> vect = {5, 4, 3, 2, 1};
    insertionSort2(vect);
    return 0;
}
