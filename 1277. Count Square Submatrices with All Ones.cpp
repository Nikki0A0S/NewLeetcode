//https://leetcode.com/problems/count-square-submatrices-with-all-ones/

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int cont = 0;
        for (int i=0; i<matrix.size(); ++i) {
            for (int j=0; j<matrix[0].size(); ++j) {
                if (matrix[i][j]==1){
                    ++cont;
                    int k=1;
                    bool fl=true;
                    while(k<min(matrix[0].size()-j, matrix.size()-i) && fl) {
                        int l= 0;
                        bool flag=true;
                        while (l <= k && flag){
                            if (matrix[i+k][j+l]==0 || matrix[i+l][j+k]==0){
                                flag=false;
                                --l;
                            } 
                            ++l;
                        }
                        if (l<=k){
                            fl=false;
                            cont--;
                        } 
                        ++cont;
                        ++k;
                    }
                }
            }
        }
        return cont;
    }
};