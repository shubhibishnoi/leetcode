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
    
    bool helper(TreeNode* r, int cs, int ts){
        if(!r) return false;
        
        if(!r->left && !r->right) {
            if(r->val + cs == ts){
                return true;
            }
        }
        
        cs+=r->val;
        int ls= helper(r->left,cs,ts);
        int rs= helper(r->right,cs,ts);
        
        return ls||rs;
        
    }
    
    bool hasPathSum(TreeNode* r, int ts) {
        if(!r) return false;
        int cs=0;
      return  helper(r,cs,ts);
    }
};