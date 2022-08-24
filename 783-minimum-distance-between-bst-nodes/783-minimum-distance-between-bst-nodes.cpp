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
     vector<int> v;

    int hlper(TreeNode* root, vector<int>& v){
        if(!root) return -1;
        hlper(root->left, v);
        v.push_back(root->val);
        hlper(root->right,v);
        
        int mini =INT_MAX;
                for(int i=1;i<v.size(); i++){
            int a = v[i]-v[i-1];
                    //cout<<a;
            mini = min(a,mini);
        }
        return mini;
        
    }
    
    int minDiffInBST(TreeNode* root) {
        if(!root) return -1;
       
       
        
      return  hlper(root,v);

    }
};



// class Solution {
// public:
//     int minDiffInBST(TreeNode* root) {
        
//         inorder(root);
                
//         int mine=v[1]-v[0];
        
//         for(int i=0;i<v.size()-1;i++)
//             mine=min(mine, v[i+1]-v[i]);
//         return mine;
        
//     }
    
//     vector<int> v;
    
//     void inorder(TreeNode* root)
//     {
        
//         if(root)
//         {
//             inorder(root->left);
//             v.push_back(root->val);
//             inorder(root->right);
//         }
        
//     }
// };