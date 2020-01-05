//https://leetcode.com/problems/all-possible-full-binary-trees/

/**
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
    vector<TreeNode*> allPossibleFBT(int N) {
        vector<TreeNode*> neu;
        if(N%2==1){
            if(N==1){
                neu.push_back(new TreeNode(0));
            }     
            else{
                for(int n=1; n<N-1; n+=2){
                    for(TreeNode* neuright: allPossibleFBT(N-1-n)){
                        for(TreeNode* neuleft: allPossibleFBT(n)){
                            TreeNode* root=new TreeNode(0);
                            root->left=neuleft;
                            root->right=neuright;
                            neu.push_back(root);
                        }
                    }
                }              
            }      
        } 
        return neu; 
    } 
};