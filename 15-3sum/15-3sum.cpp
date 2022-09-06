class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int  n = nums.size();
        sort(nums.begin(), nums.end()); //sorting
        
     for(int i=0 ;i<n; i++){
         
         
         if(i!=0 && nums[i] == nums[i-1]) continue;
         int j= i+1;
         int l = n-1;
         
         while(j<l){
             int sum = nums[i]+nums[j]+nums[l];
                 
             if(sum==0){
                 cout<< "i: "<< i<< "j: " << j<< "l: " << l<< endl;

                 ans.push_back({nums[i], nums[j], nums[l]});

               j++;
                 
                 while(j<l  && nums[j]==nums[j-1]) j++;
             }
             else if(sum<0){
                 j++;
             }
             
             else l--;
         }
     }
        return ans;
        
    }
};