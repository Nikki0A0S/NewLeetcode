//https://leetcode.com/problems/delete-columns-to-make-sorted/

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int cont=0;
        bool fl=true;
        for(int j=0; j<A[0].size(); j++){
            int i=0;
            fl=true;
            while (fl && i<A.size()-1){
                if(A[i][j]>A[i+1][j]){
                    cont++;
                    fl=false;
                }
                i++;
            }
        }
        return cont;
    }
};
