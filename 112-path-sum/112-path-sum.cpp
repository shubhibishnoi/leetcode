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
    
    bool helper(TreeNode* root, int ts, int cs){
        if(!root) return false;
        if(!root->left && !root->right){
            if(cs+root->val == ts)
            return true;
        }
        
        cs+=root->val;
        
     int ls =   helper(root->left, ts,cs);
     int rs =   helper(root->right, ts, cs);
        return ls|| rs;
        
    }
    
    bool hasPathSum(TreeNode* root, int ts) {
        if(!root) return false;
        
        int cs =0;
        
     return  helper(root,ts,cs );
    }
};