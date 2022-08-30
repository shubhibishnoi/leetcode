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
    

    
//     TreeNode *prev = NULL;
    
//      void flatten(TreeNode* root){
//          if(!root) return ;
         
//          flatten(root->right);
//          flatten(root->left);
         
//          root->right = prev;
//          root->left = NULL;
         
//          prev = root;
                             
//      }
    
    void flatten(TreeNode* root){
        if(!root) return ;
        while(root){
            if(root->left){
                TreeNode* tempL = root->left;
                TreeNode* curr = tempL;
                while(curr->right){
                    curr = curr->right;
                }
                curr->right = root->right;
                root->right = tempL;
                root->left= NULL;
            }
            root = root->right;
        }
        
    }
    
 };



