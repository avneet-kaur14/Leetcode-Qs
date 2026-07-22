class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int leftSum=0,rightSum=0,total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        for(int i=0;i<n;i++){
            if(leftSum==total-leftSum-nums[i]){
                return i;
            }
            leftSum+=nums[i];
        }   
        return -1;     
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna