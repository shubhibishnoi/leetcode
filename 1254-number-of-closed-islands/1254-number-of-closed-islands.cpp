class Solution {
public:
    
    int dx[4] = {-1,-1,0,0};
    int dy[4] = {0,0,-1,1};
    
    int dfs(int r, int c, vector<vector<int>>&grid){
        if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size()) return 0;
        
          if(grid[r][c]==2 || grid[r][c]==1)  return 1; //the island is visited or has water 
     
        
        //marking it as visited 
        grid[r][c]= 2;
        
        int up = dfs(r+1,c, grid);
        int down = dfs(r-1,c,grid);
        int left = dfs(r,c-1,grid);
        int right = dfs(r,c+1, grid);
        
        if(up==1 && up==down && down==right && left==right) return 1;
        return 0;
        
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        
        if(grid.size()==0) return 0;
        int n= grid.size();
        int m = grid[0].size();
        int ans=0;
        
        for(int i=0;i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==0) { //our main condition 
                    if(dfs(i,j,grid)){
                        ans++;
                    }
                }
            }
        }
        return ans;
        
    }
};




