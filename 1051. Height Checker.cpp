//https://leetcode.com/problems/height-checker/submissions/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cont=0;
        vector <int> neu (heights.size());
        for (int i=0; i< neu.size(); ++i){
            neu[i]=heights[i];
        }
        sort(neu.begin(), neu.end());
        for (int i=0; i< neu.size(); ++i){
            if (neu[i]!=heights[i]){
                cont++;
            }
        }
        return cont;
    }
};