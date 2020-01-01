//https://leetcode.com/problems/flipping-an-image/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int buf;
        for(int i = 0; i < A.size(); i++){
            for(int j = 0; j <=(A[i].size()-1)/2 ; j++){
                buf = abs((A[i][A[i].size()-j-1])-1);
                A[i][A[i].size()-j-1] = abs((A[i][j])-1);
                A[i][j] = buf;
            }
        }
        return A;
    }
};