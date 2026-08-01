class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=0;
        while(j<nums.size() && i<nums.size()){
            if(nums[j]!=val){
                nums[i++]=nums[j];
            }
            j++;
        }
        return i;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna