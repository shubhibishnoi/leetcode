class Solution {
public:
    void rotate(vector<vector<int>>& mt) {
        int n = mt.size();
        int m = mt[0].size();
        
        for(int i=0; i<n ;i++){
            for(int j =0; j<i; j++ ){
                swap(mt[i][j], mt[j][i]);
            }
        }
        
        for(int i=0; i<n; i++){
            reverse(mt[i].begin(), mt[i].end());
        }
    }
};