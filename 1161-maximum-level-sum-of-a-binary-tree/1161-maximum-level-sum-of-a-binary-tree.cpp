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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        
        queue<TreeNode*> q;
        q.push(root);
       // q.push(NULL);
        int ans =-1;
        int level = 1;
        int maxi = INT_MIN;
        
        while(!q.empty()){
            int sum =0;
            int n =q.size();
           for(int i=0;i<n;i++){
               auto node = q.front();
               q.pop();
               sum+=node->val;
           
            
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
           }
            
            if(sum>maxi){
                maxi = sum;
                ans = level;
            }
            level++;
            
        }
        return ans;
            
    }
};




