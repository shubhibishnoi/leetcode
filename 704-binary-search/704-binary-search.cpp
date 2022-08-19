class Solution {
public:
    
    
  
        
    
    
//     int search(vector<int>& nums, int target) {
// //         if(nums.size()==0) return -1;
// //         map<int,int> m;
        
// //         for(int i=0; i<nums.size(); i++){
// //             m[nums[i]] = i;
            
// //         }
        
// //         if(m.find(target) !=m.end()){
// //         return m[target];
// //         }

        
// //         else return -1;
        
//         int n =nums.size();
        
//         //int mid = (n+1)/2;
        
//         helper(nums, target,  n);
    
//     int helper(vector<int>& nums,int l, int r, int target){
        
//         if(r>=l){
        
//         int mid = (l+r)/2;
//             if(nums[mid] == target) return mid;
            
//         if(nums[mid]> target){
//             return helper(nums, l, mid-1 , target);
//         }
        
//         else if(nums[mid] <target){
//             return helper(nums, mid+1, r , target);
//         }
        
//         }
        
//         return -1;
        
//     }
    
    
    int search(vector<int>& nums, int t){
        
      int n = nums.size();
        
int l=0;
        int mid ;
        int r = n-1;
        
        while(l<=r){
             mid = l+(r-l)/2;
            if(nums[mid] == t ) return mid;
            
            else if(nums[mid] <t){
                l = mid+1;
            }
            
            else r =mid-1;
        }
 return nums[mid] == t ? mid : -1;
        
        
    }
};