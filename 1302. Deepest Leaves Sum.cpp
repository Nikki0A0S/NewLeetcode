/**
//https://leetcode.com/problems/deepest-leaves-sum/ 

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
    void count(TreeNode* root,int now,int& max,int& cont)
    {
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            if(now>max){
                cont=root->val;
                max=now;
            }
            else if(now==max){
                cont+=root->val;
            }
        }
        count(root->left,now+1,max,cont);
        count(root->right,now+1,max,cont);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int max=0;
        int cont=0;
        count(root,0,max,cont);
        return cont; 
    }
};