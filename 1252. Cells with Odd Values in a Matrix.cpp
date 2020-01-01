//https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/

class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
    int k;
    int l;
    int cont=0;
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
           matrix[i][j]=0;
        }
    }
    for (auto iter:indices){
        k=iter[0];
        l=iter[1];
        for (int i=0; i<m; i++){
           matrix [k] [i]+=1; 
        }
        for (int i = 0; i < n; i++) {
            matrix[i][l] += 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            k = matrix[i][j];
            if (k % 2 == 1)
                cont += 1;
        }
    }
    return cont;
}
};