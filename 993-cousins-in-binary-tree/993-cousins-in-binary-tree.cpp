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
    
    int helper(TreeNode* root , int &parent, int value, int ht){
        if(!root) return 0;
        
        if(root->val == value) return ht;
        parent = root->val;
        
        int left = helper(root->left, parent, value, ht+1);
        
        if(left) return left;
        
        parent = root->val;
        
        int ri8 = helper(root->right, parent, value, ht+1);
        return ri8;
        
        
    }
    
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val == x || root->val ==y) return 0;
        
        int Px = -1;
        int Hx = helper(root, Px, x, 0);
        
        
        int Py = -1;
        int Hy= helper(root,Py, y, 0);
        
        if(Px!=Py && Hx==Hy) return true;
        
        return false;
    }
};