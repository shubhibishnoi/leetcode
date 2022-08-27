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
    
    TreeNode *it = new TreeNode(0);
    TreeNode* node = it;
    
    void helper(TreeNode* root){
         if(!root) return ;
        
        helper(root->left);
        
        node->right= new TreeNode(root->val);
 node->left =NULL;
        node= node->right;
        helper(root->right);
    }
     
    
    TreeNode* increasingBST(TreeNode* root) {
      
        helper(root);
        return it->right;
    }
};