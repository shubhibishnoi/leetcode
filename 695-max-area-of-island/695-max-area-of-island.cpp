class Solution {
public:
    int vis[50][50] = {0};
    
    bool dfs(int i, int j, int n, int m, vector<vector<int>>& grid, int &cnt){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0 || vis[i][j]==1) return 0;
        
        
        vis[i][j]=1;
        
        if(dfs(i+1, j, n,m,grid, cnt)) cnt++;
                if(dfs(i, j+1, n,m,grid, cnt)) cnt++;
                if(dfs(i-1, j, n,m,grid, cnt)) cnt++;
                if(dfs(i, j-1, n,m,grid, cnt)) cnt++;



        return true;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int cnt =0;
        int maxi =  INT_MIN;
        if(n==0 || m==0) return 0;
        
        for(int i=0; i<n ;i++){
            for(int j=0; j<m ;j++){
                if(grid[i][j]==1){
                    cnt =1;
                    
                    dfs(i,j,n,m,grid, cnt);
                    maxi =max(maxi, cnt);
                }
            }
        }
        
        return maxi>0 ? maxi : 0;
    }
};