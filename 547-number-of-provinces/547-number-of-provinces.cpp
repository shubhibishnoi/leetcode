class Solution {
 public:
    
    void dfs(vector<vector<int>>& g, vector<int> &vis, int src ){
        int n = g.size();
        vis[src] = 1;
        
        for(int j=0; j<n;j++){
            if(!vis[j] && src!=j && g[src][j]==1){
                dfs(g,vis,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& g) {
int n = g.size();
        int ans=0;
        vector<int> vis(n,0);
        for(int i=0; i<n ;i++){
         //  for(int j=0 ;j<n ; j++){
                if(vis[i] ==0 ){
                    dfs(g,vis,i);
                                        ans++;

                }
            
        }
        return ans;
    }

};