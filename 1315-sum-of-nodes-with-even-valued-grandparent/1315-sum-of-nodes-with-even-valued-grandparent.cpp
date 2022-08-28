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
int helper(TreeNode* root, int &sum){
    if(!root) return 0;
    
    if(root->val % 2==0){
        if(root->left && root->left->left) sum+=root->left->left->val;
        
        if(root->left && root->left->right) sum+=root->left->right->val;
        
        if(root->right && root->right->left) sum+=root->right->left->val;
        
        if(root->right && root->right->right) sum+=root->right->right->val;
    }
    
  helper(root->left, sum);
    helper(root->right, sum);
    
    return sum;
}
    
    int sumEvenGrandparent(TreeNode* root) {
        if(!root) return 0;
        int sum=0; 
       return  helper(root, sum);
    }
};