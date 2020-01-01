//https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> neu(A.size());
        int contr=0;
        int contl=A.size()-1;
        for  (auto i:A){
            if(i%2==0){
                neu[contr]=i;
                contr++;
            }
            else{
                neu[contl]=i;
                contl--;
            }
        }
        return neu;
    }
};