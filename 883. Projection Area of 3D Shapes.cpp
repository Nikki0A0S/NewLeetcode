//https://leetcode.com/problems/projection-area-of-3d-shapes/

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int cont=0;
        for (int i=0; i< grid.size(); ++i) {
            int maxi=0;  
            int maxj=0;
            for (int j=0; j< grid.size(); ++j) {
                if (grid[i][j]> 0){
                    cont++;
                }
                maxi=max(maxi, grid[i][j]);
                maxj=max(maxj, grid[j][i]);
            }
            cont+=maxi+maxj;
        }
        return cont;
    }
};