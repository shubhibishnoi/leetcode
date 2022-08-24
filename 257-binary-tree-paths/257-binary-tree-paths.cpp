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
    
  void dfs(vector<string>&v , string s , TreeNode*root ){
        
        
         if(root==NULL){
             return ;
         }
        
        if(s.empty()){  //when empty insert root->val'
            //The to_string() method accepts a single integer and converts the integer value or other data type value into a string.

             s+=to_string(root->val);
         }
        else{
            s+="->";
            s+=to_string(root->val);
        }
        
         if(root->left==NULL && root->right == NULL){
             v.push_back(s);
             s="";
         }
        
         
        
 dfs(v,s,root->left);
         dfs(v,s,root->right);
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
         vector<string>v;
        
          dfs(v,"",root);
        
        return v;
    }
};