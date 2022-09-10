class Solution {
public:
    int solve(int idx,int tranNo,vector<int> &prices,int k,vector<vector<int>> &dp)
    {
        if(idx==prices.size()||tranNo==2*k)
            return 0;
        if(dp[idx][tranNo]!=-1)
            return dp[idx][tranNo];
            
        if(tranNo%2==0)//buy
        {
            return dp[idx][tranNo]=max(-prices[idx]+solve(idx+1,tranNo+1,prices,k,dp),0+solve(idx+1,tranNo,prices,k,dp));
        }
           
        return dp[idx][tranNo]=max(prices[idx]+solve(idx+1,tranNo+1,prices,k,dp),0+solve(idx+1,tranNo,prices,k,dp));
        
    }
    int maxProfit(int k, vector<int>& prices)
    {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2*k,-1));
        return solve(0,0,prices,k,dp);
        
    }
};