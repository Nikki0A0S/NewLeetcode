//https://leetcode.com/problems/max-increase-to-keep-city-skyline/

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int cont=0;
        vector<int> nomj(grid.size());
        vector <int> nomi(grid.size());
        for (int i=0; i<grid.size(); ++i){
            for (int j=0; j<grid.size(); ++j){
                nomi[i]=max(nomi[i],grid[i][j]);
                nomj[j]=max(nomj[j],grid[i][j]);
            }
        }
        for(int i=0; i<grid.size(); ++i){
            for (int j=0; j<grid.size(); ++j){
                cont+=min(nomi[i],nomj[j])-grid[i][j];
            }
        }
        return cont;
    }
};