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


// 	      5					    1
// 	   /     \
// 	   3      6					2
// 	 /  \    /
// 	2  NULL  4				    3 (NULL node also counted)


// if root is empty // return NULL

// insert(5, 0) in queue,  queue is not empty
// we will continue.

// res = 1; 

// 1. pop(5,0);

// 	now we look at size of queue, size is one therefore
// 	and now we will insert,
// 	left and right child of popped node that is 5 in this case
// 	therefore,  
// 2. (3,1) , (6,2)  is inserted.

// when we will finish with one iteration,
// we will see the index of first element and index of last element in the current level..

// i.e difference,

// (2 - 1) + 1 and we will assign this to result.

// so we will check  as,   res  = max(res, endIdx - startIdx + 1)
// 				res  = max(0, (2-1) + 1)
// 				res  = 2

// 3. Now (3,1)  is poped and its left and right child will be inserted.

// 	i.e (2,3)  its right is empty it will not insert

//    Poped (6,2)
// 	and now right & left child of (6,2) will inserted.

// 	i.e (4,5) its right is empty it will not insert,

// now at this level the startIdx is 3 (2,3)  & the endIndx is 5


// therefore res = max(res  = max(res, endIdx - startIdx + 1)
// 	    res = max(2, (5-3) + 1)
// 	    res = 3

// 4. Now we will pop it and now there is nothing to push.

// So finally we will return the result... (3)


// As tree is Going Exponentially so we can come accross signed overflow,
// therefore for preventing that we will do,

// 	int idx = p.second - start;

// as we don't need  previous values. also we will type cast 2 * idx to  long long
// AS EACH NODE IS VISITED ONCE
// Time Complexity O(N)
// Space Comlexity O(N)










class Solution {
public:
    
//     int widthOfBinaryTree(TreeNode* root) {
//          queue<pair<TreeNode*,int>> q;
        
//         if(!root) return 0;
          
//         int res = 1;
       
//         q.push({root, 0});
    
    
//         while(!q.empty()){
//         int n = q.size();
            
//             int si = q.front().second;
//             int ei = q.back().second;
            
//             res= max(res, ei-si+1);
            
//             for(int i=0; i<n ; i++)
//             {
//                 pair<TreeNode*, int> p = q.front();
//                 int indx = p.second ;
                
//                 q.pop();
                 
//                 if(p.first->left) q.push({p.first->left,(long long) 2*indx + 1});
//              if(p.first->right) q.push({p.first->right,(long long) 2*indx + 2});

//             }  
//             }
            
//         return res;  
//     }
    
     int widthOfBinaryTree(TreeNode* root){
         queue<pair<TreeNode*, int>> q;
         
         if(!root) return 0;
         int width =1;
         q.push({root, 0});
         
         while(!q.empty()){
          
                 int n = q.size();
           
            
             int ei = q.back().second;
             int si =q.front().second;
              
             width = max(width, ei-si+1);
             
             for(int i=0; i<n; i++){
                 
               pair<TreeNode*, int> p = q.front();
                 
                 int indx = p.second ;
                 q.pop();
                 
                 if(p.first->left) q.push({p.first->left,(long long) 2*indx + 1});
                 if(p.first->right) q.push({p.first->right,(long long) 2*indx +2});
             }
             
         }
         
         return width;
     }
    
    
    
    
    
    
    
    
    
    
    
    
};
