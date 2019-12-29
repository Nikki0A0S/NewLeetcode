//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> nom={-1,-1};
        int i=0;
        int j=0;
        while(i<nums.size()){
            j=i+1;
            while(j<nums.size()){
                if (nums[i]+nums[j]==target) {
                    nom[0]=i;
                    nom[1]=j;
                }
                j++;
            }
            i++;
        }
        return nom;
    }
};