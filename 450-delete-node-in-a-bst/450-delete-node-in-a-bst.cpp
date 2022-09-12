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
// class Solution {
// public:
//         TreeNode* findminfromright(TreeNode* root){
//         while(root->left!=nullptr)
//             root=root->left;
//         return root;
//     }
    
    
//     TreeNode* deleteNode(TreeNode* root, int k) {
// if(!root)return root;
//         else if(k < root->val) {
//             deleteNode(root->left, k);
//         }
        
//         else if(k> root->val){
//             deleteNode(root->right, k);
//         }
//         //nochild
//         else{
//             if(!root->left &&!root->right){
//                 delete root;
//                 root = NULL;
//                 return root;
//             }
            
            
//     //one child
//             else if(!root->left){
//                 TreeNode* temp = root;
//                 root = root->right;
//                 delete temp;
//             }

//             else if(!root->right){
//                 TreeNode* temp = root;
//                 root= root->left;
//                 delete temp;
//             }
        
        
//         else {
//             TreeNode* temp = findminfromright(root->right);
//             root->val = temp->val;
//             root->right = deleteNode(root->right, temp->val);
            
//         }
//         }
//         return root;
    
//     }
// };
















class Solution {
public:
    int findminfromright(TreeNode* root){
        while(root->left!=nullptr)
            root=root->left;
        return root->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr) return root;
        else if(root->val>key) root->left=deleteNode(root->left,key);
        else if(root->val<key) root->right=deleteNode(root->right,key);
        else{
            if(root->right==nullptr){
                return root->left;
            }else if(root->left==nullptr){
                return root->right;
            }
            
            else{
			    //replace the root value by find the minimum val from right side 
                root->val=findminfromright(root->right);
                root->right = deleteNode(root->right, root->val);
            }
        }
        return root;
    }
   
};
