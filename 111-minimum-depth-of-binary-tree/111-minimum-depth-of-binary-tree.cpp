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
    
    int ans = INT_MAX;
    void helper(TreeNode* root, int k){
        if(!root) return ;
        
        if(!root->left && !root->right) ans = min(ans,k);
        helper(root->left, k+1);
        helper(root->right, k+1);
    return;
    }
    

    int minDepth(TreeNode* root) {
 
        helper(root, 1);
        if(ans ==INT_MAX) return 0;
        return ans;
    }
};