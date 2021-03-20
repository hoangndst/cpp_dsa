#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int tmp = 0;
        for (auto i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                tmp++;
                res = max(res, tmp);
            }
            else if (nums[i] == 0) {
                tmp = 0;
            }
        }
        return res;
    }
};
