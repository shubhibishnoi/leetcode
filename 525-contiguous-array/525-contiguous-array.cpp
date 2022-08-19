class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> m;//stores sum and its corresponding index
            
            int sum =0;
        int subarrayL = 0;
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i]==0 ? -1: 1;
            
            if(sum == 0){
                if(subarrayL < i+1){ // lenght is less than i+1  thn update
                    subarrayL= i+1;
                }
                
            }
            
            else if(m.find(sum)!= m.end()){
                if(subarrayL < i-m[sum]) subarrayL = i-m[sum];
            }
            
            else m[sum ]=i;
        }
        
        return subarrayL;
    }
};