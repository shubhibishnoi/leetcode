class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int  n = s.length();
        int si=0;
        int ei=0;
        int ans =0;
        unordered_map<char,int>m;
        
        while(ei<n){
            m[s[ei]]++;
            
            while(m[s[ei]]> 1){
                m[s[si]]--;
                si++;
            }
            ans = max(ans, ei-si+1);
            ei++;
        }
        
        return ans;
    }
};