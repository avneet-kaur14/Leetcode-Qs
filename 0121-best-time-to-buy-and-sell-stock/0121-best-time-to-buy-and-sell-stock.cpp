class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        vector<int> bestBuy(prices.size());
        bestBuy[0]=INT_MAX;
        for(int i=1;i<prices.size();i++){
            bestBuy[i]=min(prices[i-1],bestBuy[i-1]);
        }
        for(int i=0;i<prices.size();i++){
            int currProfit=prices[i]-bestBuy[i];
            maxProfit=max(maxProfit,currProfit);
        }
        return maxProfit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna