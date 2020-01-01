//https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

class Solution {
public:
     vector<int> sumZero(int n) {
        vector<int> neu(n);
        for (int i=0; i<n/2; ++i){
            neu[i]=i+1;
            neu[n-i-1]=-i-1;
        }
        return neu;
    }
};