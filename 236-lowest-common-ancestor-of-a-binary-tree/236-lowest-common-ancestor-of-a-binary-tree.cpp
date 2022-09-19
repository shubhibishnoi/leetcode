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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        
        if(p== root || q==root) return root;
        
        TreeNode* n1 = lowestCommonAncestor(root->left, p, q);
               TreeNode* n2 =        lowestCommonAncestor(root->right, p, q);
        
        if(n1 && n2) return root;
         else if(n1 && !n2) return n1;
        
        else if(!n1 && n2) return n2;
        
        else return NULL;
        
        return root;
        
    }
};