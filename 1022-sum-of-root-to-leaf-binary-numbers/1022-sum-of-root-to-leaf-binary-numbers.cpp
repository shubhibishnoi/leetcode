class Solution {
    int helper(TreeNode* root, int sum){
        if(!root) return 0;
        sum = (2 * sum) + root->val;
        if(!root->left && !root->right) return sum;
        return helper(root->left, sum) + helper(root->right, sum);
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        return helper(root, 0);
    }
    
};