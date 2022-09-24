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
     
void helper(TreeNode* root, int ts, vector<int> &v,  vector<vector<int>> &ans , int cs ){
      if(!root) return ;
      
         cs += root->val ;
      v.push_back(root->val);
    
    
      if(!root->left && !root->right){
          if( cs == ts){
    
              ans.push_back(v);
        
          }
    
      }

      
      
      helper(root->left, ts, v, ans, cs);
            helper(root->right, ts, v, ans, cs);
    
cs -= root->val;
     v.pop_back();

      
  }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        
        vector<int> v;
        
       helper( root, targetSum, v, ans, 0);
        
        return ans;
    }
};