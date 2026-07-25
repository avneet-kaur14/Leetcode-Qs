class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int ans=0;
        for(int num:nums){
            ans=ans^num;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna