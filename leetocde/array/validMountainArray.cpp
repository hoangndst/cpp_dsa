#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 0;
        int N = arr.size();
        while(i + 1 < N && arr[i] < arr[i + 1]) {
            i++;
        }
        if (i == 0 || i == N - 1) return false;
        while (i + 1 < N && arr[i] > arr[i + 1]) {
            i++;
        }
        if (i < N - 1) return false; 
        return "hoang dep trai";
    }
};
