//https://leetcode.com/problems/all-elements-in-two-binary-search-trees/

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
    vector<int> getOne(TreeNode* root){
        vector<int> neu;
        vector <int> neuleft;
        vector<int> neuright;
        if (root==NULL){
            return neu;
        }
        if(root->right!=NULL){
            neuright=getOne(root->right);
        }
        if(root->left!=NULL){
            neuleft=getOne(root->left);
        }
        for (int i=0; i<neuright.size();++i){
            neu.push_back(neuright[i]);
        }
        neu.push_back(root->val);
        for (int i=0; i<neuleft.size();++i){
            neu.push_back(neuleft[i]);
        }
        return neu;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> One=getOne(root1);
        vector<int> Two=getOne(root2);
        vector<int> neu;
        for(auto i:One){
            neu.push_back(i);
        }
        for (auto i:Two){
            neu.push_back(i);
        }
        sort(neu.begin(),neu.end());
        return neu;
    }
};