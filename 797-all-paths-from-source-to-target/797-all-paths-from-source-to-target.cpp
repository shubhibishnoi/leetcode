class Solution {
public:
    
    void dfs(int src, vector<vector<int>>& g, vector<bool> &vis,   vector<int> &ans,  vector<vector<int>> &v){
        if(src == g.size()-1){
            ans.push_back(src);
            v.push_back(ans);
            
            ans.pop_back();
            return;
        }
        
        
        vis[src] = true;
        ans.push_back(src);
        for(auto x: g[src]){
            if(!vis[x]){
                dfs(x,g,vis,ans,v);
            }
        }
        ans.pop_back();
        vis[src]=0;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
        int n = g.size();
        vector<vector<int>> v;
        vector<bool> vis(n,false);
        vector<int> ans;
        
        dfs(0,g,vis,ans,v);
        
        return v;
        
    }
};


