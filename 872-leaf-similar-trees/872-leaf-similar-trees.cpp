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
    
    void dfs(TreeNode* r, vector<int> &v){
        if(!r) return ;
        
        if(!(r->left || r->right)){
            v.push_back(r->val);
        }
        
        dfs(r->left,v);
        dfs(r->right,v);
    }
    
    bool leafSimilar(TreeNode* r1, TreeNode* r2) {
        vector<int>v1{};
        vector<int> v2{};
        
        dfs(r1,v1);
        dfs(r2,v2);
        return v1== v2;
    }
};
    
 