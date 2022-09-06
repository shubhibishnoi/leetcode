class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
     vector<int> v(n+1,0);
        

        
    for(auto x: t){
    v[x[1]]++;
        v[x[0]]--;
        
    }
        for(int i=1; i<n+1 ;i++){
            if(v[i] == n-1)
                return i;
        }
        
        return -1;
    }
};