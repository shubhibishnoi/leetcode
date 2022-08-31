class Solution {
public:
   int dx[8] = {-1,1,0,0,-1, 1, -1, 1};
    int dy[8] = {0,0,-1,1, 1, 1, -1, -1};
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int currsteps = 1;
        if(grid[0][0] != 0)return -1;
        
        if(grid.size()==1){
            return currsteps;
        }
        
        queue<pair<int,int>>qu;
        qu.push({0,0});
        
        while(qu.empty()==false){
            int size = qu.size();
            currsteps++;

            for(int i = 0; i<size; i++){
                pair<int,int>p = qu.front();
                qu.pop();
                
                for(int a = 0; a<8; a++){ //for 8 directions
                    
                    int currx = p.first + dx[a];
                    int curry = p.second + dy[a];
                    
                    if(currx>=0 and curry>=0 and currx<grid.size() and curry<grid.size() and grid[currx][curry] == 0){
                        qu.push({currx, curry}); //
                        grid[currx][curry] = 1;
                        if((currx == grid.size()-1) and (curry==grid.size()-1)){
                            return currsteps;
                        }
                    }
                }    
            }
        }
        
        return -1;
    }
};