class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = nums[0]+nums[1]+nums[2];
        
        for(int i=0; i<n; i++){
            int l=i+1;
            int r= n-1;
            
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum == t) return sum;
                
                else if(sum> t){
                    r--;
                    
                }
                else l++;
                
                            if(abs(ans-t) > abs(sum-t )) ans = sum;

            }
            
            
        }
        
        return ans;
    }
};