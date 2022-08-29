class Solution {
public:
    void DFS(vector<vector<char>>&grid , int i , int j){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return;
        
        if(grid[i][j] == '2' || grid[i][j] == '0')
            return; // visited or is water
        
        grid[i][j] = '2'; // marking the unvisted as visited 
        
        // doing DFS on the all 4 dirs
        
        DFS(grid , i+1 , j);
        DFS(grid , i , j+1);
        DFS(grid , i-1 , j);
        DFS(grid , i , j-1);    
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i =0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    DFS(grid , i , j);
                    ++ans;
                }
            }
        }
        
        return ans;
    }
};