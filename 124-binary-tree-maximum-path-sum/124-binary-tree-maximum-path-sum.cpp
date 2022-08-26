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
    int ans = 0 , f = -1e9; // -1000000000
    int dfs(TreeNode *root) 
    {
        if(!root) return 0;
        f = max(f , root->val);
        int ls = 0 , rs = 0;
        if(root->left) ls = dfs(root->left);
        if(root->right) rs = dfs(root->right);
        ans = max(ans , max(ls , max(rs , ls + rs + root->val)));
        return max(0 , max(ls + root->val , rs + root->val));
        
    }
    int maxPathSum(TreeNode* root) {
        if(!root) return ans;
       dfs(root);
        if(ans == 0) ans = f;
        return ans;   
    }
};