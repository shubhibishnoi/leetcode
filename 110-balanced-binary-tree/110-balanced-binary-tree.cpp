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
    
    int height(TreeNode*root){
        if(!root) return 0;
        int LH = height(root->left);
        int RH = height(root->right);
        
        return 1+max(LH,RH);
        
    }
    
    
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        
        int diff = height(root->left)- height(root->right);
        if(diff!=0 && diff!=1 && diff!=-1) return false;
        
        bool a = isBalanced(root->left);
        bool b = isBalanced(root->right);
        
        if(a) return b;
        
        else return false;
         
        
        
        
    }
};