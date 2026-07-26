class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int currSum=nums[0];
        for(int i=1;i<nums.size();i++){
            currSum=max(nums[i],currSum+nums[i]);
            sum=max(sum,currSum);
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna