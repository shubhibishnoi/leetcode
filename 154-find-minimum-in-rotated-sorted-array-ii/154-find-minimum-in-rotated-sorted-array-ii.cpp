class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int h= nums.size()-1;
        
        while(l<h){
            if(nums[l] < nums[h]) return nums[l];
            
            int m = l+(h-l)/2;
            
            if(nums[m] > nums[h]) l =m+1;
            
            else if(nums[m] < nums[h]) h = m;
            
            else h--; //both same  3 3 1 3
            
        }
        
        return nums[l];
    }
};