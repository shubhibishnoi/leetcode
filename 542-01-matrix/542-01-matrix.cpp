class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
       // vector<vector<int>> vis(n , vector<int>(m,0));
                vector<vector<int>> dis(n , vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        
        for(int i=0; i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]== 0){
                    q.push({{i,j},0});
                    //vis[i][j]=1;
                    mat[i][j] = 3;
                    
                }
                
                // else{
                //     vis[i][j]=0;
                // }
                
            }
        }
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
     while(!q.empty()){
         int x = q.front().first.first;
         int y = q.front().first.second;
         int step = q.front().second;
         q.pop();
         dis[x][y]=step;
         for(int k=0;k<4;k++){
             int nx = x+delrow[k];
             int ny= y+delcol[k];
             if(nx>=0&& nx<n && ny>=0 && ny<m&& mat[nx][ny] !=3){
               //  vis[nx][ny] = 1;
                 mat[nx][ny] = 3;
                 q.push({{nx,ny},step+1});
             }
             
         }
         
         
     }
        
        return dis;

    }
};
