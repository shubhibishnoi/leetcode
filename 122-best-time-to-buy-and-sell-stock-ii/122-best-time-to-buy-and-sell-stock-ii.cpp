class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size()-1;
        int buy=0;
        int sell =0;
        int profit =0;
        int i=0;
        while(i<n){
            while(i<n && prices[i]>= prices[i+1])i++;
            buy =prices[i];
            while(i<n && prices[i+1]> prices[i])i++;
            sell =prices[i];
            
            profit+= sell -buy;
            
        }
        
        return profit;
    }
};