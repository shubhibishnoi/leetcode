class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> ans;
        int numToBeRemoved = nums.size()-k;
        for(auto x: nums){
            while(ans.size()&&numToBeRemoved&& x<ans.back()){
                ans.pop_back();
                numToBeRemoved--;
            }
            ans.push_back(x);
        }
        
        while(numToBeRemoved){
            ans.pop_back();
            numToBeRemoved--;
        }
        
        return ans;
    }
};