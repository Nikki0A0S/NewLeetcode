//https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector <int> neu(A.size());
        int conto=0;
        int conte=1;
        for (auto i:A){
            if (i%2==0){
                neu[2*conto]=i;
                conto++;
            }
            else{
                neu[conte]=i;
                conte+=2;
            }
        }
        return neu;
    }
};