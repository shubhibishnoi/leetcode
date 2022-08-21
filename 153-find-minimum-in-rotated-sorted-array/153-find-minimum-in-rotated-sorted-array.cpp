class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int h = nums.size()-1;
        while(l< h){
            if(nums[l]<nums[h]) return nums[l];
            
          int m = l+(h-l)/2;
            if(nums[m]> nums[h]) l =m+1;
            else h = m;
        }
        
        return nums[l];
    }
    

};


