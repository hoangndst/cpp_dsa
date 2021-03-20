#include<bits/stdc++.h>
#include <string>
using namespace std;
class Solution {
public:

    int counts (int *n) {
        string tmp = to_string(*n);
        return tmp.size();
    }

    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (auto i = nums.begin(); i != nums.end(); i++) {
            if (counts(&*i) %2 == 0) {
                count++;
            }
        } 
        return count;
    }
};


int main() {

}
