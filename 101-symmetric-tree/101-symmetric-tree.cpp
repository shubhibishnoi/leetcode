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
    
//    bool helper(TreeNode* root1, TreeNode* root2){
//         if(root1==NULL && root2 == NULL) return true;
//         if(root1!=NULL && root2==NULL) return false;
//         if(root1 ==NULL&& root2 !=NULL ) return false;
        
       
//        helper(root1->left ,root2->right);
//            return true;
//     }
//     bool isSymmetric(TreeNode* root) {
//         if(!root) return true;
       
        
//         helper(root->left, root->right);
               
//                return true;
// }
    
    
    
    bool isSymmetric(TreeNode* root) {
		return (root==NULL || isSymmetricHelp(root->left,root->right));
	}
    
    
    
	bool isSymmetricHelp(TreeNode*left,TreeNode*right){
		if(left==NULL || right==NULL)
			return left==right;
		if(left->val != right->val)
			return false;
		return isSymmetricHelp(left->left,right->right) && isSymmetricHelp(left->right,right->left);
	}
};