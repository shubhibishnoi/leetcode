class Solution {
public:
    int search(vector<int>& nums, int t) {
        vector<int> v;
      
        for(int i=0 ;i<nums.size();i++){
            if(nums[i] == t) return i;
        }
        
        return -1;
    }
};