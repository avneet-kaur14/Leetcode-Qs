class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int sec=0;
        for(int i=0;i<tickets.size();i++){
            if(i<=k){
                sec+=min(tickets[i],tickets[k]);
            }else{
                sec+=min(tickets[i],tickets[k]-1);
            }
        }
        return sec;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna