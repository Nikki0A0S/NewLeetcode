//https://leetcode.com/problems/relative-sort-array/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector <int> neu (arr1.size());
        int cont=0;
        for (auto i: arr2){
            for (auto j: arr1){
                if (i==j){
                    neu[cont]=i;
                    cont++;
                }
            }
        }
        vector <int> neus;
        for (auto i: arr1){
            if(find(neu.begin(), neu.end(), i)==neu.end()){
                neus.push_back(i);
            }
        }
        sort(neus.begin(), neus.end());
        for (auto i: neus){
            neu[cont]=i;
            cont++;
        }
        return neu;
    }
};