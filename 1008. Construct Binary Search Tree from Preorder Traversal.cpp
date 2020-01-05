//https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/

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
    TreeNode* makeTree(TreeNode* root, int cont){
        if(root==NULL){
            return new TreeNode(cont);
        }
        if(root->val<cont){
            root->right=makeTree(root->right,cont);
        }
        else{
            root->left=makeTree(root->left,cont);
        }
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root= new TreeNode(preorder[0]);
        for (int i=1; i<preorder.size(); ++i){
            makeTree(root, preorder[i]);
        }
        return root;
    }
};