class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0,j=n,k=0;
        vector <int> ans(2*n);
        while(k<2*n){
            ans[k++]=nums[i++];
            ans[k++]=nums[j++];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna