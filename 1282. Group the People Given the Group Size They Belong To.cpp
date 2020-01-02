//https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> neu;
        map<int,vector<int>> neum;
        for (int i=0; i<groupSizes.size(); ++i){
            neum[groupSizes[i]].push_back(i);
        }
        for (auto i:neum){
            int k=i.first-1;
            int cont=i.second.size()-1;
            vector<int> neuv;
            while(cont>=0){
                neuv.push_back(i.second[cont]);
                if (k==0 && cont>k){
                    neu.push_back(neuv);
                    k=i.first;
                    neuv.clear();
                }
                k--;
                cont--;
            }
            neu.push_back(neuv);
        }
        return neu;
    }
};