class StockSpanner {
public:
    stack<pair<int,int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span=1;

        while(!s.empty() && price>=s.top().first){
            span+=s.top().second;
            s.pop();
        }
        s.push({price,span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna