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
    vector<int>v;
    
    void inorder(TreeNode* root){
        if(!root) return ;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
        
    }
    vector<int> getAllElements(TreeNode* r1, TreeNode* r2) {
        
        inorder(r1);
        inorder(r2);
        
        sort(v.begin(), v.end());
        
        return v;
    }
};