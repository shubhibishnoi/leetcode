class Solution {
public:
    int trap(vector<int>& h) {
        int l=0, r = h.size()-1;
        int level =0;
        int ans =0;
        
        while(l<r){
            int lower = h[ h[l] < h[r] ? l++ : r--];
            
            level = max(lower, level);
            
            ans+= level-lower;
        }
        
        return ans;
    }
};