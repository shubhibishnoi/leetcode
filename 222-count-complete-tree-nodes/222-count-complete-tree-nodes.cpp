
//Method - 4 : ( 0(n) approach )

class Solution {
public:
    int count = 0;
    void helper(TreeNode* root){
         
        if(root)
            count++;
        
        if(root->left)
        helper(root->left);
        if(root->right)
        helper(root->right);
        
    }
    
    int countNodes(TreeNode* root) {
        if(!root)
            return 0;
       helper(root);
        return count;
    }
};