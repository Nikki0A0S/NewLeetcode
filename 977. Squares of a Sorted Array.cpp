//https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> neu(A.size());
        int cont=0;
        for(auto i:A){
                neu[cont]=pow(abs(i),2);
            cont++;
        }
        sort(neu.begin(),neu.end());
        return neu;
    }
};