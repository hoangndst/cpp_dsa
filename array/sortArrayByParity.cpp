class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int a = 0;
        int b = A.size() - 1;
        while (a < b) {
            if (A[a] %2 != 0) {
                if (A[b] %2 == 0) {
                    swap(A[a], A[b]);
                    a++;
                    b--;
                } else {
                    b--;
                }
            } else {
                a++;
            }
        }
        return A;
    }
    
    // return A;
};
