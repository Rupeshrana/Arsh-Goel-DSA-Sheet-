class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int buyprices=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buyprices){
                buyprices=prices[i];
            }
            profit=max(profit,prices[i]-buyprices);
        }
           
        return profit ;
        
    }
};