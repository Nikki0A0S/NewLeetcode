/**
//https://leetcode.com/problems/maximum-binary-tree/ 

 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int>nums;
    
    TreeNode* makeTree(int beginn,int ennd){
        if(beginn> ennd){
            return NULL;
        }
        int max=nums[beginn];
        int imax = beginn;
        for(int i = beginn;i <= ennd;i++){
            if(max< nums[i]){
                max = nums[i];
                imax = i;
            } 
        }
        TreeNode* root = new TreeNode(max);
        root -> left = makeTree(beginn,imax - 1);
        root -> right = makeTree(imax + 1,ennd);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        this -> nums = nums;
        return makeTree(0,nums.size() - 1);
    }
};