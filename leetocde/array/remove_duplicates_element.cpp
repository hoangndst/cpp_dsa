#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};


// convert from vector to set
int main() {    
    vector<int> vect = {5, 1, 1, 2, 8, 8, 7, 7, 4, 3, 1, 2, 4, 5};
    // remove duplicates elements
    vect.erase(unique(vect.begin(), vect.end()), vect.end());
    // sort vector
    sort(vect.begin(), vect.end());
    
    //manually 
    set<int> s1;
    for (int i = 0; i < vect.size(); i++) {
        s1.insert(vect[i]);
    }
    vect.assign(vect.begin(), vect.end());

    return 0;
}
