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
    
//     int reverse(int x)
        
//     {
//     int rev_num = 0;
//     while (x > 0) {
//         rev_num = rev_num * 10 + x % 10;
//         x = x/ 10;
//     }
//     return rev_num;
// }
 
    
    
//      int a =0;
//     int ld=0;
//       int ans= 0;
    
//     int helper(TreeNode* root, int i){
//         if(!root) return 0;

      
//         ld= root->val;
//         a += ld*pow(10,i);

//         if(!root->left && !root->right){
//           ans +=  reverse(a);
//         }
        
//         int ansL = helper(root->left, i+1);
   
//         int ansR = helper(root->right, i+1);
        

    
        
//         return ans ;
        
        
//     }
    
//     int sumNumbers(TreeNode* root) {
//       return  helper(root, 0);
        
//     }
    
  

 
    
    
   
    int helper(TreeNode* root, int i){
        if(!root) return 0;

        if(!root->left && !root->right){
            return 10*i+root->val;
        }
        else
        {
        int ansL = helper(root->left, 10*i+root->val);
   
        int ansR = helper(root->right, 10*i+root->val);
        

        return ansL+ansR;
        }
        
        
    }
    
    int sumNumbers(TreeNode* root) {
      return  helper(root, 0);
        
    }
    
    
};