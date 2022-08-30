class Solution {
public:
    
    
    void dfs(int i, int j ,  vector<pair<int,int>> &c, vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=grid.size() || j>=grid.size() || grid[i][j]==0) return;
        c.push_back({i,j});
        grid[i][j] = 0;
        dfs(i+1,j,c,grid);
        dfs(i,j+1,c,grid);
        dfs(i-1,j,c,grid);
        dfs(i,j-1,c,grid);

    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        vector<pair<int,int>> c1,c2;
        int n = grid.size();
        int ans= INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<n ;j++){
                if(grid[i][j]==1 && c1.size()==0){
                    dfs(i,j,c1,grid);
                }
                
               else if(grid[i][j]==1 &&  c2.size()==0){
                    dfs(i,j,c2,grid);
                }
            }
        }
        
        for( auto x : c1){
            for(auto y: c2){
                ans = min(ans, (abs(x.first - y.first)+ abs(x.second - y.second)) -1 );
            }
            
        }
        
        return ans;
    }
};