//https://leetcode.com/problems/array-partition-i/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int cont=0;
        sort(nums.begin(),nums.end());
        for (int i=nums.size()-1; i>0; i=i-2){
            cont += min(nums[i],nums[i-1]);
        }
        return cont;
    }
};