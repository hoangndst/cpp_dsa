#include<bits/stdc++.h>
using namespace std;
void print(vector<int> vect){
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }
    cout << endl;
}

void insertionSort1(int n, vector<int> arr) {
    int tmp = arr[n - 1];
    arr[n - 1] = arr[n - 2];
    print(arr);
    for (int i = n - 2; i > 0; i--) {
        if (arr[i - 1] <= tmp && tmp <= arr[i + 1]) {
            arr[i] = tmp;
            print(arr);
            break;
        }
        arr[i] = arr[i - 1];
        print(arr);
        if (i == 1) {
            arr[0] = tmp;
            print(arr);
        }
    } 
}
int main() {
    vector<int> vect = {2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
    insertionSort1(vect.size(), vect);
}

// 2 3 4 5 6 7 8 9 10 10
// 2 3 4 5 6 7 8 9 9 10
// 2 3 4 5 6 7 8 8 9 10
// 2 3 4 5 6 7 7 8 9 10
// 2 3 4 5 6 6 7 8 9 10
// 2 3 4 5 5 6 7 8 9 10
// 2 3 4 4 5 6 7 8 9 10
// 2 3 3 4 5 6 7 8 9 10
// 2 2 3 4 5 6 7 8 9 10
// 1 2 3 4 5 6 7 8 9 10


// 2 3 4 5 6 7 8 9 10 10 
// 2 3 4 5 6 7 8 9 9 10
// 2 3 4 5 6 7 8 8 9 10
// 2 3 4 5 6 7 7 8 9 10
// 2 3 4 5 6 6 7 8 9 10
// 2 3 4 5 5 6 7 8 9 10
// 2 3 4 4 5 6 7 8 9 10
// 2 3 3 4 5 6 7 8 9 10
// 2 2 3 4 5 6 7 8 9 10