class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int maxProfit=0;
        for(int i=1;i<prices.size();i++){
            maxProfit=max(maxProfit,prices[i]-minPrice);
            minPrice=min(prices[i],minPrice);

        }
        return maxProfit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna