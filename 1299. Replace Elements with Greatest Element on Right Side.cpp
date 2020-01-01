//https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector <int> neu(arr.size());
        int j=0;
        for (j=0; j<arr.size(); ++j){
            int k=0;
            int max=-1;
            for(auto i:arr){
                if(k>j && i>max){
                    max=i;
                }
                k++;
            }
            neu[j]=max;
        }
        return neu;
    }
};