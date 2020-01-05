//https://leetcode.com/problems/binary-tree-pruning/

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
    TreeNode* changeTree(TreeNode*& root) {
        if (!root){
            return NULL;
        }
        root->right= changeTree(root->right);
        root->left= changeTree(root->left);
        if (root->val==0 && root->left==NULL && root->right==NULL) {
            return NULL;
        }
        return root;
    }
    TreeNode* pruneTree(TreeNode* root) {
        return changeTree(root);
    }
};