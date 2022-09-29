/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode* root){
        if(!root->left && !root->right) return root->val;
        
        int l = helper(root->left);
        int r = helper(root->right);
        
        return l+r;
    }
    
    bool checkTree(TreeNode* root) {
        
        if(!root) return true;
        
    int ans = helper(root);
        if(ans == root->val ) return true;
        return false;
        
        
    }
};