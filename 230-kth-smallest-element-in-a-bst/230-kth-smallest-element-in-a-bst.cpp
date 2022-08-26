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
//     void helper(TreeNode* root, vector<int>& v){
        
//         if(!root) return;
        
        
        
//         helper(root->left, v);
//         v.push_back(root->val);
//         helper(root->right, v);
        
//     }
    
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> v;
        
//         helper(root, v);
        
      
        
//         // for(int i=0; i<v.size() ; i++){
//         //      cout<< v[i];
//         //     }
            
            
//         return v[k-1];
//         }
    
    
    int i;
    int ans;
    
    int helper(TreeNode*root){
        if(!root) return -1;
        
        helper(root->left);
        
        i--;
        if(i==0) ans= root->val;
        
        helper(root->right);
        
        return ans;
    }
    
    int kthSmallest(TreeNode* root, int k){
        i=k;
       return helper(root);
    }
   
    
};

























